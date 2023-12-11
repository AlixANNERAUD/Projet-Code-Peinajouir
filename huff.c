#include "huff.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_004007a0(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    // WARNING: Subroutine does not return
  __assert_fail(__assertion,__file,__line,__function);
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = feof(__stream);
  return iVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = fseek(__stream,__off,__whence);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_1,auStack_8)
  ;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00400917)
// WARNING: Removing unreachable block (ram,0x00400921)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00400954)
// WARNING: Removing unreachable block (ram,0x0040095e)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_6972 == '\0') {
    deregister_tm_clones();
    completed_6972 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0040099a)
// WARNING: Removing unreachable block (ram,0x004009a4)

void frame_dummy(void)

{
  register_tm_clones();
  return;
}



void calculerStatistiques(FILE *f,SDO_StatistiquesDOctets *psdo,ulong *nbOctets)

{
  int iVar1;
  ulong *nbOctets_local;
  SDO_StatistiquesDOctets *psdo_local;
  FILE *f_local;
  uchar c;
  O_Octet o;
  
  *nbOctets = 0;
  while( true ) {
    iVar1 = feof((FILE *)f);
    if (iVar1 != 0) break;
    fread(&c,1,1,(FILE *)f);
    *nbOctets = *nbOctets + 1;
    o = O_octet(c);
    SDO_incrementer(psdo,o);
  }
  *nbOctets = *nbOctets - 1;
  return;
}



// WARNING: Variable defined which should be unmapped: sdo-local

AHDO_ArbreHuffmanDOctets creerArbreAPartirDeStatistique(SDO_StatistiquesDOctets sdo)

{
  FPAH_FilePrioriteDArbresHuffman f_00;
  O_Octet o_00;
  int iVar1;
  ulong uVar2;
  FPAH_FilePrioriteDArbresHuffman FVar3;
  undefined8 uStack_48;
  SDO_StatistiquesDOctets sdo_local;
  uchar c;
  O_Octet o;
  int i;
  AHDO_ArbreHuffmanDOctets a;
  AHDO_ArbreHuffmanDOctets fd;
  AHDO_ArbreHuffmanDOctets fg;
  FPAH_FilePrioriteDArbresHuffman f;
  
  FVar3 = FPAH_filePrioriteDArbresHuffman();
  f.arbres = FVar3.arbres;
  f.nb = FVar3.nb;
  c = '\0';
  for (i = 0; i < 0x100; i = i + 1) {
    o_00 = O_octet(c);
    uVar2 = SDO_nbOccurences(sdo,o_00);
    if (uVar2 != 0) {
      uVar2 = SDO_nbOccurences(sdo,o_00);
      a = AHDO_creerFeuille(o_00,(int)uVar2);
      FPAH_enfiler(&f,a);
    }
    c = c + '\x01';
  }
  while (FVar3.arbres = (AHDO_ArbreHuffmanDOctets *)sdo, FVar3._0_8_ = uStack_48,
        iVar1 = FPAH_estVide(FVar3), iVar1 == 0) {
    FPAH_defiler(&f,&a);
    f_00.arbres = (AHDO_ArbreHuffmanDOctets *)sdo;
    f_00._0_8_ = uStack_48;
    iVar1 = FPAH_estVide(f_00);
    if (iVar1 == 0) {
      fg = a;
      FPAH_defiler(&f,&fd);
      a = AHDO_creerArbre(fg,fd);
      FPAH_enfiler(&f,a);
    }
  }
  FPAH_detruire(&f);
  return a;
}



// WARNING: Variable defined which should be unmapped: pcodeCourant-local

void remplirTableCodage(TC_TableCodage *ptc,AHDO_ArbreHuffmanDOctets a,CB_CodeBinaire *pcodeCourant)

{
  CB_CodeBinaire cb_00;
  CB_CodeBinaire cb_01;
  O_Octet o;
  int iVar1;
  AHDO_ArbreHuffmanDOctets pAVar2;
  Bit *pBStack_38;
  CB_CodeBinaire *pcodeCourant_local;
  AHDO_ArbreHuffmanDOctets a_local;
  TC_TableCodage *ptc_local;
  CB_CodeBinaire cb;
  
  iVar1 = AHDO_estUneFeuille(a);
  if (iVar1 == 0) {
    CB_ajouterBit(pcodeCourant,bitA0);
    pAVar2 = AHDO_filsBitA0(a);
    remplirTableCodage(ptc,pAVar2,pcodeCourant);
    CB_supprimerDernierBit(pcodeCourant);
    CB_ajouterBit(pcodeCourant,bitA1);
    pAVar2 = AHDO_filsBitA1(a);
    remplirTableCodage(ptc,pAVar2,pcodeCourant);
    CB_supprimerDernierBit(pcodeCourant);
  }
  else {
    cb_00._8_8_ = pcodeCourant;
    cb_00.bits = pBStack_38;
    CB_dupliquer(cb_00);
    o = AHDO_element(a);
    cb_01._8_8_ = pcodeCourant;
    cb_01.bits = pBStack_38;
    TC_ajouter(ptc,o,cb_01);
  }
  return;
}



// WARNING: Variable defined which should be unmapped: tc-local

void compresserOctetsSource(FILE *fSrc,FILE *fDst,TC_TableCodage tc)

{
  TC_TableCodage tc_00;
  CB_CodeBinaire cb;
  CB_CodeBinaire cb_00;
  Bit b;
  int iVar1;
  int *in_RCX;
  CB_CodeBinaire *in_RDX;
  TC_TableCodage tc_local;
  FILE *fDst_local;
  FILE *fSrc_local;
  uchar cSrc;
  uchar cDst;
  O_Octet octetDest;
  O_Octet octetSource;
  int i;
  int nbBitRempli;
  CB_CodeBinaire codeOctetSource;
  
  octetDest = O_octet('\0');
  nbBitRempli = 0;
  while( true ) {
    iVar1 = feof((FILE *)fSrc);
    if (iVar1 != 0) break;
    fread(&cSrc,1,1,(FILE *)fSrc);
    octetSource = O_octet(cSrc);
    tc_00.estPresent = in_RCX;
    tc_00.codes = in_RDX;
    codeOctetSource = TC_code(tc_00,(O_Octet)in_RDX);
    i = 1;
    while( true ) {
      cb_00._8_8_ = in_RCX;
      cb_00.bits = (Bit *)in_RDX;
      iVar1 = CB_nbBits(cb_00);
      if (iVar1 < i) break;
      nbBitRempli = nbBitRempli + 1;
      cb._8_8_ = in_RCX;
      cb.bits = (Bit *)in_RDX;
      b = CB_iemeBit(cb,codeOctetSource.bits);
      O_fixerIemeBit(&octetDest,nbBitRempli,b);
      if (nbBitRempli == 8) {
        cDst = O_octetEnNaturel(octetDest);
        fwrite(&cDst,1,1,(FILE *)fDst);
        nbBitRempli = 0;
      }
      i = i + 1;
    }
  }
  if (nbBitRempli != 0) {
    cDst = O_octetEnNaturel(octetDest);
    fwrite(&cDst,1,1,(FILE *)fDst);
  }
  return;
}



void ecrireEntete(FILE *fDst,ulong nbOctets,SDO_StatistiquesDOctets sdo)

{
  SDO_StatistiquesDOctets sdo_local;
  ulong nbOctets_local;
  FILE *fDst_local;
  uchar c;
  O_Octet o;
  int i;
  ulong nb;
  char *id;
  
  id = "HUF";
  nbOctets_local = nbOctets;
  fDst_local = fDst;
  fwrite(&DAT_00402194,1,3,(FILE *)fDst);
  fwrite(&nbOctets_local,8,1,(FILE *)fDst_local);
  c = '\0';
  for (i = 0; i < 0x100; i = i + 1) {
    o = O_octet(c);
    nb = SDO_nbOccurences(sdo,o);
    fwrite(&nb,8,1,(FILE *)fDst_local);
    c = c + '\x01';
  }
  return;
}



// WARNING: Variable defined which should be unmapped: fDst-local

int compresser(FILE *fSrc,FILE *fDst)

{
  TC_TableCodage tc_00;
  FILE *fDst_local;
  FILE *fSrc_local;
  SDO_StatistiquesDOctets sdo;
  AHDO_ArbreHuffmanDOctets a;
  ulong nbOctets;
  CB_CodeBinaire cb;
  TC_TableCodage tc;
  
  sdo = SDO_statistiquesDOctets();
  cb = CB_codeBinaire();
  tc = TC_tableCodage();
  fseek((FILE *)fSrc,0,0);
  calculerStatistiques(fSrc,&sdo,&nbOctets);
  a = creerArbreAPartirDeStatistique(sdo);
  remplirTableCodage(&tc,a,&cb);
  CB_detruire(&cb);
  AHDO_detruire(&a);
  fseek((FILE *)fSrc,0,0);
  ecrireEntete(fDst,nbOctets,sdo);
  tc_00.estPresent = &fSrc->_flags;
  tc_00.codes = (CB_CodeBinaire *)fDst;
  compresserOctetsSource(fSrc,fDst,tc_00);
  SDO_detruire(&sdo);
  TC_detruire(&tc);
  return 1;
}



int estUnFichierCompresse(FILE *fSrc)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  FILE *fSrc_local;
  int nb_lu;
  char buffer [4];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  sVar3 = fread(buffer,1,3,(FILE *)fSrc);
  if (((((int)sVar3 == 3) && (buffer[0] == 'H')) && (buffer[1] == 'U')) && (buffer[2] == 'F')) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar2;
}



int lireEntete(FILE *fSrc,ulong *pnbOctets,SDO_StatistiquesDOctets *psdo)

{
  O_Octet o_00;
  int iVar1;
  size_t sVar2;
  SDO_StatistiquesDOctets *psdo_local;
  ulong *pnbOctets_local;
  FILE *fSrc_local;
  uchar c;
  O_Octet o;
  int i;
  int nb_lu;
  ulong nb;
  
  iVar1 = estUnFichierCompresse(fSrc);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    sVar2 = fread(pnbOctets,8,1,(FILE *)fSrc);
    if ((int)sVar2 == 1) {
      c = '\0';
      for (i = 0; i < 0x100; i = i + 1) {
        o_00 = O_octet(c);
        sVar2 = fread(&nb,8,1,(FILE *)fSrc);
        if ((int)sVar2 != 1) {
          return 0;
        }
        SDO_fixer(psdo,o_00,nb);
        c = c + '\x01';
      }
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



int decompresserOctetsSource(FILE *fSrc,FILE *fDst,ulong nbOctets,AHDO_ArbreHuffmanDOctets a)

{
  int iVar1;
  Bit BVar2;
  size_t sVar3;
  AHDO_ArbreHuffmanDOctets a_local;
  ulong nbOctets_local;
  FILE *fDst_local;
  FILE *fSrc_local;
  uchar cSrc;
  uchar cDst;
  O_Octet octetSource;
  O_Octet octetDest;
  int nbBitLu;
  int nb_lu;
  ulong i;
  AHDO_ArbreHuffmanDOctets p;
  
  nbBitLu = 0;
  i = 0;
  p = a;
  do {
    if (nbOctets <= i) {
      return 1;
    }
    if (nbBitLu == 0) {
      sVar3 = fread(&cSrc,1,1,(FILE *)fSrc);
      nb_lu = (int)sVar3;
      if (nb_lu != 1) {
        return 0;
      }
      octetSource = O_octet(cSrc);
      nbBitLu = nbBitLu + 1;
    }
    iVar1 = AHDO_estUneFeuille(p);
    if (iVar1 == 0) {
      BVar2 = O_obtenirIemeBit(octetSource,nbBitLu);
      if (BVar2 == bitA0) {
        p = AHDO_filsBitA0(p);
      }
      else {
        p = AHDO_filsBitA1(p);
      }
      nbBitLu = (nbBitLu + 1) % 9;
    }
    else {
      octetDest = AHDO_element(p);
      cDst = O_octetEnNaturel(octetDest);
      fwrite(&cDst,1,1,(FILE *)fDst);
      i = i + 1;
      p = a;
    }
  } while( true );
}



int decompresser(FILE *fSrc,FILE *fDst)

{
  int iVar1;
  FILE *fDst_local;
  FILE *fSrc_local;
  ulong nbOctets;
  SDO_StatistiquesDOctets sdo;
  AHDO_ArbreHuffmanDOctets a;
  
  sdo = SDO_statistiquesDOctets();
  iVar1 = lireEntete(fSrc,&nbOctets,&sdo);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  else {
    a = creerArbreAPartirDeStatistique(sdo);
    iVar1 = decompresserOctetsSource(fSrc,fDst,nbOctets,a);
  }
  return iVar1;
}



// WARNING: Unknown calling convention

void afficherCommande(void)

{
  puts("huffman c fichier");
  puts("huffman d fichier.huf");
  return;
}



int main(int argc,char **argv)

{
  char cVar1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  FILE *pFVar5;
  size_t sVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  byte bVar11;
  char **argv_local;
  int argc_local;
  int ok;
  FILE *fSrc;
  FILE *fDst;
  char nomFichierSrc [1000];
  undefined auStack_40c [3];
  undefined uStack_409;
  char nomFichierDst [1000];
  long local_20;
  
  bVar11 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  nomFichierSrc[0] = '\0';
  nomFichierSrc[1] = '\0';
  nomFichierSrc[2] = '\0';
  nomFichierSrc[3] = '\0';
  nomFichierSrc[4] = '\0';
  nomFichierSrc[5] = '\0';
  nomFichierSrc[6] = '\0';
  nomFichierSrc[7] = '\0';
  puVar9 = (undefined8 *)(nomFichierSrc + 8);
  for (lVar7 = 0x7c; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  nomFichierDst[0] = '\0';
  nomFichierDst[1] = '\0';
  nomFichierDst[2] = '\0';
  nomFichierDst[3] = '\0';
  nomFichierDst[4] = '\0';
  nomFichierDst[5] = '\0';
  nomFichierDst[6] = '\0';
  nomFichierDst[7] = '\0';
  puVar9 = (undefined8 *)(nomFichierDst + 8);
  for (lVar7 = 0x7c; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  if (argc == 3) {
    iVar2 = strcmp(argv[1],"c");
    iVar3 = strcmp(argv[1],"d");
    if (iVar3 == 0 || iVar2 == 0) {
      iVar2 = strcmp(argv[1],"c");
      if (iVar2 == 0) {
        strcpy(nomFichierSrc,argv[2]);
        strcpy(nomFichierDst,argv[2]);
        uVar8 = 0xffffffffffffffff;
        pcVar10 = nomFichierDst;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + (ulong)bVar11 * -2 + 1;
        } while (cVar1 != '\0');
        *(undefined4 *)(auStack_40c + ~uVar8 + 3) = 0x6675682e;
        nomFichierDst[~uVar8 + 3] = '\0';
        pFVar4 = fopen(nomFichierSrc,"rb");
        pFVar5 = fopen(nomFichierDst,"wb");
        ok = compresser((FILE *)pFVar4,(FILE *)pFVar5);
        fclose(pFVar4);
        fclose(pFVar5);
      }
      else {
        strcpy(nomFichierSrc,argv[2]);
        strcpy(nomFichierDst,argv[2]);
        sVar6 = strlen(nomFichierDst);
        auStack_40c[sVar6] = 0;
        pFVar4 = fopen(nomFichierSrc,"rb");
        pFVar5 = fopen(nomFichierDst,"wb");
        ok = decompresser((FILE *)pFVar4,(FILE *)pFVar5);
        fclose(pFVar4);
        fclose(pFVar5);
      }
      if (ok == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      afficherCommande();
      iVar2 = 1;
    }
  }
  else {
    afficherCommande();
    putchar(0x65);
    iVar2 = 1;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return iVar2;
}



O_Octet O_octet(uchar v)

{
  uchar v_local;
  
  return (O_Octet)v;
}



uchar O_octetEnNaturel(O_Octet o)

{
  O_Octet o_local;
  
  return (uchar)o;
}



uchar ucharAUnSeulBitA1(int rang)

{
  int rang_local;
  uchar val;
  int i;
  
  if ((0 < rang) && (rang < 9)) {
    val = '\x01';
    for (i = 1; i < rang; i = i + 1) {
      val = val << 1;
    }
    return val;
  }
                    // WARNING: Subroutine does not return
  __assert_fail("(rang>=1) && (rang<=8)","src/octet.c",0xe,"ucharAUnSeulBitA1");
}



Bit O_obtenirIemeBit(O_Octet o,int rang)

{
  byte bVar1;
  int rang_local;
  O_Octet o_local;
  
  if ((0 < rang) && (rang < 9)) {
    bVar1 = ucharAUnSeulBitA1(rang);
    return (Bit)((o & bVar1) != 0);
  }
                    // WARNING: Subroutine does not return
  __assert_fail("(rang>=1) && (rang<=8)","src/octet.c",0x18,"O_obtenirIemeBit");
}



void O_fixerIemeBit(O_Octet *po,int rang,Bit b)

{
  byte bVar1;
  Bit BVar2;
  Bit b_local;
  int rang_local;
  O_Octet *po_local;
  ushort val;
  Bit bitCourant;
  
  bVar1 = ucharAUnSeulBitA1(rang);
  BVar2 = O_obtenirIemeBit(*po,rang);
  if (BVar2 != b) {
    if (b == bitA1) {
      *po = *po | (ushort)bVar1;
    }
    else {
      *po = *po ^ (ushort)bVar1;
    }
  }
  return;
}



// WARNING: Unknown calling convention

CB_CodeBinaire CB_codeBinaire(void)

{
  CB_CodeBinaire CVar1;
  void *pvVar2;
  CB_CodeBinaire cb;
  
  pvVar2 = malloc(0x200);
  CVar1.nb = 0;
  CVar1.bits = (Bit *)pvVar2;
  CVar1._12_4_ = cb._12_4_;
  return CVar1;
}



int CB_nbBits(CB_CodeBinaire cb)

{
  int in_ESI;
  CB_CodeBinaire cb_local;
  
  return in_ESI;
}



void CB_ajouterBit(CB_CodeBinaire *pcb,Bit b)

{
  Bit b_local;
  CB_CodeBinaire *pcb_local;
  
  pcb->bits[pcb->nb] = b;
  pcb->nb = pcb->nb + 1;
  return;
}



// WARNING: Variable defined which should be unmapped: rang-local

void CB_supprimerBit(CB_CodeBinaire *pcb,int rang)

{
  CB_CodeBinaire cb;
  CB_CodeBinaire cb_00;
  int iVar1;
  undefined4 uStack_28;
  int rang_local;
  CB_CodeBinaire *pcb_local;
  int i;
  
  if (0 < rang) {
    cb.bits._4_4_ = rang;
    cb.bits._0_4_ = uStack_28;
    cb._8_8_ = pcb;
    iVar1 = CB_nbBits(cb);
    if (rang <= iVar1) {
      i = rang + -1;
      while( true ) {
        cb_00.bits._4_4_ = rang;
        cb_00.bits._0_4_ = uStack_28;
        cb_00._8_8_ = pcb;
        iVar1 = CB_nbBits(cb_00);
        if (iVar1 <= i) break;
        pcb->bits[(long)i + -1] = pcb->bits[i];
        i = i + 1;
      }
      pcb->nb = pcb->nb + -1;
      return;
    }
  }
                    // WARNING: Subroutine does not return
  __assert_fail("(rang>=1) && (rang<=CB_nbBits(*pcb))","src/codeBinaire.c",0x17,"CB_supprimerBit");
}



// WARNING: Variable defined which should be unmapped: pcb-local

void CB_supprimerDernierBit(CB_CodeBinaire *pcb)

{
  CB_CodeBinaire cb;
  int iVar1;
  Bit *pBStack_18;
  CB_CodeBinaire *pcb_local;
  
  cb._8_8_ = pcb;
  cb.bits = pBStack_18;
  iVar1 = CB_nbBits(cb);
  if (iVar1 < 1) {
                    // WARNING: Subroutine does not return
    __assert_fail("CB_nbBits(*pcb)>=1","src/codeBinaire.c",0x1f,"CB_supprimerDernierBit");
  }
  pcb->nb = pcb->nb + -1;
  return;
}



// WARNING: Variable defined which should be unmapped: rang-local

Bit CB_iemeBit(CB_CodeBinaire cb,int rang)

{
  CB_CodeBinaire cb_00;
  int iVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined auStack_38 [12];
  int rang_local;
  CB_CodeBinaire cb_local;
  
  if (0 < in_EDX) {
    cb_00._12_4_ = in_EDX;
    cb_00._0_12_ = auStack_38;
    iVar1 = CB_nbBits(cb_00);
    if (in_EDX <= iVar1) {
      return *(Bit *)(CONCAT44(in_register_0000003c,rang) + (long)in_EDX * 4 + -4);
    }
  }
                    // WARNING: Subroutine does not return
  __assert_fail("(rang>=1) && (rang<=CB_nbBits(cb))","src/codeBinaire.c",0x25,"CB_iemeBit");
}



void CB_detruire(CB_CodeBinaire *pcb)

{
  CB_CodeBinaire *pcb_local;
  
  free(pcb->bits);
  return;
}



CB_CodeBinaire CB_dupliquer(CB_CodeBinaire cb)

{
  CB_CodeBinaire CVar1;
  void *__dest;
  undefined4 in_ESI;
  void *in_RDI;
  CB_CodeBinaire cb_local;
  CB_CodeBinaire copie;
  
  __dest = malloc(0x200);
  memcpy(__dest,in_RDI,0x200);
  CVar1.nb = in_ESI;
  CVar1.bits = (Bit *)__dest;
  CVar1._12_4_ = copie._12_4_;
  return CVar1;
}



// WARNING: Unknown calling convention

SDO_StatistiquesDOctets SDO_statistiquesDOctets(void)

{
  SDO_StatistiquesDOctets puVar1;
  int i;
  SDO_StatistiquesDOctets sdo;
  
  puVar1 = (SDO_StatistiquesDOctets)malloc(0x800);
  for (i = 0; i < 0x100; i = i + 1) {
    puVar1[i] = 0;
  }
  return puVar1;
}



void SDO_incrementer(SDO_StatistiquesDOctets *psdo,O_Octet o)

{
  byte bVar1;
  O_Octet o_local;
  SDO_StatistiquesDOctets *psdo_local;
  int rang;
  
  bVar1 = O_octetEnNaturel(o);
  (*psdo)[(int)(uint)bVar1] = (*psdo)[(int)(uint)bVar1] + 1;
  return;
}



void SDO_fixer(SDO_StatistiquesDOctets *psdo,O_Octet o,ulong nb)

{
  byte bVar1;
  ulong nb_local;
  O_Octet o_local;
  SDO_StatistiquesDOctets *psdo_local;
  int rang;
  
  bVar1 = O_octetEnNaturel(o);
  (*psdo)[(int)(uint)bVar1] = nb;
  return;
}



ulong SDO_nbOccurences(SDO_StatistiquesDOctets sdo,O_Octet o)

{
  byte bVar1;
  O_Octet o_local;
  SDO_StatistiquesDOctets sdo_local;
  int rang;
  
  bVar1 = O_octetEnNaturel(o);
  return sdo[(int)(uint)bVar1];
}



void SDO_detruire(SDO_StatistiquesDOctets *psdo)

{
  SDO_StatistiquesDOctets *psdo_local;
  
  free(*psdo);
  return;
}



AHDO_ArbreHuffmanDOctets AHDO_creerFeuille(O_Octet o,int cout)

{
  AHDO_ArbreHuffmanDOctets pAVar1;
  int cout_local;
  O_Octet o_local;
  AHDO_ArbreHuffmanDOctets a;
  
  pAVar1 = (AHDO_ArbreHuffmanDOctets)malloc(0x20);
  pAVar1->estUneFeuille = 1;
  pAVar1->val = o;
  pAVar1->cout = cout;
  return pAVar1;
}



AHDO_ArbreHuffmanDOctets AHDO_creerArbre(AHDO_ArbreHuffmanDOctets f0,AHDO_ArbreHuffmanDOctets f1)

{
  int iVar1;
  int iVar2;
  AHDO_ArbreHuffmanDOctets pAVar3;
  AHDO_ArbreHuffmanDOctets f1_local;
  AHDO_ArbreHuffmanDOctets f0_local;
  AHDO_ArbreHuffmanDOctets a;
  
  pAVar3 = (AHDO_ArbreHuffmanDOctets)malloc(0x20);
  pAVar3->estUneFeuille = 0;
  pAVar3->fBitA0 = f0;
  pAVar3->fBitA1 = f1;
  iVar1 = AHDO_cout(f0);
  iVar2 = AHDO_cout(f1);
  pAVar3->cout = iVar1 + iVar2;
  return pAVar3;
}



int AHDO_estUneFeuille(AHDO_ArbreHuffmanDOctets a)

{
  AHDO_ArbreHuffmanDOctets a_local;
  
  return a->estUneFeuille;
}



O_Octet AHDO_element(AHDO_ArbreHuffmanDOctets a)

{
  int iVar1;
  AHDO_ArbreHuffmanDOctets a_local;
  
  iVar1 = AHDO_estUneFeuille(a);
  if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
    __assert_fail("AHDO_estUneFeuille(a)","src/arbreHuffmanDOctets.c",0x1b,"AHDO_element");
  }
  return a->val;
}



int AHDO_cout(AHDO_ArbreHuffmanDOctets a)

{
  AHDO_ArbreHuffmanDOctets a_local;
  
  return a->cout;
}



AHDO_ArbreHuffmanDOctets AHDO_filsBitA0(AHDO_ArbreHuffmanDOctets a)

{
  int iVar1;
  AHDO_ArbreHuffmanDOctets a_local;
  
  iVar1 = AHDO_estUneFeuille(a);
  if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    __assert_fail("!AHDO_estUneFeuille(a)","src/arbreHuffmanDOctets.c",0x24,"AHDO_filsBitA0");
  }
  return a->fBitA0;
}



AHDO_ArbreHuffmanDOctets AHDO_filsBitA1(AHDO_ArbreHuffmanDOctets a)

{
  int iVar1;
  AHDO_ArbreHuffmanDOctets a_local;
  
  iVar1 = AHDO_estUneFeuille(a);
  if (iVar1 != 0) {
                    // WARNING: Subroutine does not return
    __assert_fail("!AHDO_estUneFeuille(a)","src/arbreHuffmanDOctets.c",0x29,"AHDO_filsBitA1");
  }
  return a->fBitA1;
}



void AHDO_detruire(AHDO_ArbreHuffmanDOctets *pa)

{
  int iVar1;
  AHDO_ArbreHuffmanDOctets *pa_local;
  
  iVar1 = AHDO_estUneFeuille(*pa);
  if (iVar1 == 0) {
    AHDO_detruire(&(*pa)->fBitA0);
    AHDO_detruire(&(*pa)->fBitA1);
  }
  free(*pa);
  *pa = (AHDO_ArbreHuffmanDOctets)0x0;
  return;
}



// WARNING: Unknown calling convention

FPAH_FilePrioriteDArbresHuffman FPAH_filePrioriteDArbresHuffman(void)

{
  undefined auVar1 [16];
  void *pvVar2;
  FPAH_FilePrioriteDArbresHuffman f;
  
  pvVar2 = malloc(0x800);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = pvVar2;
  return (FPAH_FilePrioriteDArbresHuffman)(auVar1 << 0x40);
}



int FPAH_estVide(FPAH_FilePrioriteDArbresHuffman f)

{
  int in_EDI;
  FPAH_FilePrioriteDArbresHuffman f_local;
  
  return (int)(in_EDI == 0);
}



int FPAH_indiceDInsertion(FPAH_FilePrioriteDArbresHuffman f,AHDO_ArbreHuffmanDOctets a)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  AHDO_ArbreHuffmanDOctets in_RDX;
  long in_RSI;
  AHDO_ArbreHuffmanDOctets a_local;
  FPAH_FilePrioriteDArbresHuffman f_local;
  int i;
  int trouve;
  
  i = 0;
  bVar1 = false;
  while ((f_local.nb = (int)a, i < f_local.nb && (!bVar1))) {
    iVar2 = AHDO_cout(*(AHDO_ArbreHuffmanDOctets *)(in_RSI + (long)i * 8));
    iVar3 = AHDO_cout(in_RDX);
    if (iVar2 < iVar3) {
      bVar1 = true;
    }
    else {
      i = i + 1;
    }
  }
  return i;
}



void FPAH_decalerVersLaDroite(FPAH_FilePrioriteDArbresHuffman *pf,int debut)

{
  int debut_local;
  FPAH_FilePrioriteDArbresHuffman *pf_local;
  int i;
  
  for (i = pf->nb; debut <= i; i = i + -1) {
    pf->arbres[(long)i + 1] = pf->arbres[i];
  }
  return;
}



// WARNING: Variable defined which should be unmapped: a-local

void FPAH_enfiler(FPAH_FilePrioriteDArbresHuffman *pf,AHDO_ArbreHuffmanDOctets a)

{
  FPAH_FilePrioriteDArbresHuffman f;
  int debut;
  AHDO_ArbreHuffmanDOctets a_local;
  FPAH_FilePrioriteDArbresHuffman *pf_local;
  int i;
  
  f.arbres = (AHDO_ArbreHuffmanDOctets *)pf;
  f._0_8_ = a;
  debut = FPAH_indiceDInsertion(f,(AHDO_ArbreHuffmanDOctets)(ulong)(uint)pf->nb);
  FPAH_decalerVersLaDroite(pf,debut);
  pf->nb = pf->nb + 1;
  pf->arbres[debut] = a;
  return;
}



void FPAH_defiler(FPAH_FilePrioriteDArbresHuffman *pf,AHDO_ArbreHuffmanDOctets *pa)

{
  AHDO_ArbreHuffmanDOctets *pa_local;
  FPAH_FilePrioriteDArbresHuffman *pf_local;
  
  *pa = pf->arbres[(long)pf->nb + -1];
  pf->nb = pf->nb + -1;
  return;
}



void FPAH_detruire(FPAH_FilePrioriteDArbresHuffman *pf)

{
  FPAH_FilePrioriteDArbresHuffman *pf_local;
  
  free(pf->arbres);
  return;
}



// WARNING: Unknown calling convention

TC_TableCodage TC_tableCodage(void)

{
  TC_TableCodage TVar1;
  CB_CodeBinaire *pCVar2;
  int *piVar3;
  int i;
  TC_TableCodage tc;
  
  pCVar2 = (CB_CodeBinaire *)malloc(0x1000);
  piVar3 = (int *)malloc(0x400);
  for (i = 0; i < 0x100; i = i + 1) {
    piVar3[i] = 0;
  }
  TVar1.estPresent = piVar3;
  TVar1.codes = pCVar2;
  return TVar1;
}



// WARNING: Variable defined which should be unmapped: cb-local

void TC_ajouter(TC_TableCodage *ptc,O_Octet o,CB_CodeBinaire cb)

{
  int *piVar1;
  CB_CodeBinaire *pCVar2;
  TC_TableCodage tc;
  byte bVar3;
  int iVar4;
  int *in_RCX;
  CB_CodeBinaire *in_RDX;
  CB_CodeBinaire cb_local;
  O_Octet o_local;
  TC_TableCodage *ptc_local;
  
  tc.estPresent = in_RCX;
  tc.codes = in_RDX;
  iVar4 = TC_estPresent(tc,(O_Octet)ptc->codes);
  if (iVar4 != 0) {
                    // WARNING: Subroutine does not return
    __assert_fail("!TC_estPresent(*ptc,o)","src/tableCodage.c",0x10,"TC_ajouter");
  }
  piVar1 = ptc->estPresent;
  bVar3 = O_octetEnNaturel(o);
  piVar1[bVar3] = 1;
  pCVar2 = ptc->codes;
  bVar3 = O_octetEnNaturel(o);
  pCVar2[bVar3].bits = (Bit *)in_RDX;
  *(int **)&pCVar2[bVar3].nb = in_RCX;
  return;
}



int TC_estPresent(TC_TableCodage tc,O_Octet o)

{
  byte bVar1;
  O_Octet in_DX;
  long in_RSI;
  O_Octet o_local;
  TC_TableCodage tc_local;
  
  bVar1 = O_octetEnNaturel(in_DX);
  return (int)(*(int *)((ulong)bVar1 * 4 + in_RSI) == 1);
}



// WARNING: Variable defined which should be unmapped: o-local

CB_CodeBinaire TC_code(TC_TableCodage tc,O_Octet o)

{
  TC_TableCodage tc_00;
  byte bVar1;
  int iVar2;
  O_Octet in_DX;
  undefined6 in_register_0000003a;
  undefined auStack_38 [12];
  O_Octet o_local;
  undefined2 uStack_2a;
  TC_TableCodage tc_local;
  
  tc_00.estPresent._4_2_ = in_DX;
  tc_00._0_12_ = auStack_38;
  tc_00.estPresent._6_2_ = uStack_2a;
  iVar2 = TC_estPresent(tc_00,o);
  if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
    __assert_fail("TC_estPresent(tc,o)","src/tableCodage.c",0x1a,"TC_code");
  }
  bVar1 = O_octetEnNaturel(in_DX);
  return *(CB_CodeBinaire *)((ulong)bVar1 * 0x10 + CONCAT62(in_register_0000003a,o));
}



void TC_detruire(TC_TableCodage *ptc)

{
  TC_TableCodage *ptc_local;
  int i;
  
  for (i = 0; i < 0x100; i = i + 1) {
    if (ptc->estPresent[i] != 0) {
      CB_detruire(ptc->codes + i);
    }
  }
  free(ptc->codes);
  free(ptc->estPresent);
  ptc->codes = (CB_CodeBinaire *)0x0;
  ptc->estPresent = (int *)0x0;
  return;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _init(param_1);
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


