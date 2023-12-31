typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef long    sqword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef ulong sizetype;

typedef ushort O_Octet;


// WARNING! conflicting data type names: /DWARF/__off64_t - /types.h/__off64_t


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_marker - /libio.h/_IO_marker


// WARNING! conflicting data type names: /DWARF/libio.h/_IO_FILE - /stdio.h/_IO_FILE

typedef ulong * SDO_StatistiquesDOctets;

typedef struct TC_TableCodage TC_TableCodage, *PTC_TableCodage;

typedef struct CB_CodeBinaire CB_CodeBinaire, *PCB_CodeBinaire;

typedef enum Bit {
    bitA0=0,
    bitA1=1
} Bit;

struct TC_TableCodage {
    struct CB_CodeBinaire * codes;
    int * estPresent;
};

struct CB_CodeBinaire {
    enum Bit * bits;
    int nb;
};

typedef struct FPAH_FilePrioriteDArbresHuffman FPAH_FilePrioriteDArbresHuffman, *PFPAH_FilePrioriteDArbresHuffman;

typedef struct AHDO_Noeud AHDO_Noeud, *PAHDO_Noeud;

typedef struct AHDO_Noeud * AHDO_ArbreHuffmanDOctets;

struct FPAH_FilePrioriteDArbresHuffman {
    int nb;
    AHDO_ArbreHuffmanDOctets * arbres;
};

struct AHDO_Noeud {
    int estUneFeuille;
    O_Octet val;
    int cout;
    AHDO_ArbreHuffmanDOctets fBitA0;
    AHDO_ArbreHuffmanDOctets fBitA1;
};


// WARNING! conflicting data type names: /DWARF/stdio.h/FILE - /stdio.h/FILE

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef enum Elf64_DynTag {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct NoteAbiTag NoteAbiTag, *PNoteAbiTag;

struct NoteAbiTag {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    dword abiType; // 0 == Linux
    dword requiredKernelVersion[3]; // Major.minor.patch
};




int _init(EVP_PKEY_CTX *ctx);
void FUN_004007a0(void);
void free(void *__ptr);
int putchar(int __c);
char * strcpy(char *__dest,char *__src);
int puts(char *__s);
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream);
int fclose(FILE *__stream);
size_t strlen(char *__s);
void __stack_chk_fail(void);
void __assert_fail(char *__assertion,char *__file,uint __line,char *__function);
void __libc_start_main(void);
int strcmp(char *__s1,char *__s2);
int feof(FILE *__stream);
void __gmon_start__(void);
void * memcpy(void *__dest,void *__src,size_t __n);
void * malloc(size_t __size);
int fseek(FILE *__stream,long __off,int __whence);
FILE * fopen(char *__filename,char *__modes);
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s);
void processEntry _start(undefined8 param_1,undefined8 param_2);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
void calculerStatistiques(FILE *f,SDO_StatistiquesDOctets *psdo,ulong *nbOctets);
AHDO_ArbreHuffmanDOctets creerArbreAPartirDeStatistique(SDO_StatistiquesDOctets sdo);
void remplirTableCodage(TC_TableCodage *ptc,AHDO_ArbreHuffmanDOctets a,CB_CodeBinaire *pcodeCourant);
void compresserOctetsSource(FILE *fSrc,FILE *fDst,TC_TableCodage tc);
void ecrireEntete(FILE *fDst,ulong nbOctets,SDO_StatistiquesDOctets sdo);
int compresser(FILE *fSrc,FILE *fDst);
int estUnFichierCompresse(FILE *fSrc);
int lireEntete(FILE *fSrc,ulong *pnbOctets,SDO_StatistiquesDOctets *psdo);
int decompresserOctetsSource(FILE *fSrc,FILE *fDst,ulong nbOctets,AHDO_ArbreHuffmanDOctets a);
int decompresser(FILE *fSrc,FILE *fDst);
void afficherCommande(void);
int main(int argc,char **argv);
O_Octet O_octet(uchar v);
uchar O_octetEnNaturel(O_Octet o);
uchar ucharAUnSeulBitA1(int rang);
Bit O_obtenirIemeBit(O_Octet o,int rang);
void O_fixerIemeBit(O_Octet *po,int rang,Bit b);
CB_CodeBinaire CB_codeBinaire(void);
int CB_nbBits(CB_CodeBinaire cb);
void CB_ajouterBit(CB_CodeBinaire *pcb,Bit b);
void CB_supprimerBit(CB_CodeBinaire *pcb,int rang);
void CB_supprimerDernierBit(CB_CodeBinaire *pcb);
Bit CB_iemeBit(CB_CodeBinaire cb,int rang);
void CB_detruire(CB_CodeBinaire *pcb);
CB_CodeBinaire CB_dupliquer(CB_CodeBinaire cb);
SDO_StatistiquesDOctets SDO_statistiquesDOctets(void);
void SDO_incrementer(SDO_StatistiquesDOctets *psdo,O_Octet o);
void SDO_fixer(SDO_StatistiquesDOctets *psdo,O_Octet o,ulong nb);
ulong SDO_nbOccurences(SDO_StatistiquesDOctets sdo,O_Octet o);
void SDO_detruire(SDO_StatistiquesDOctets *psdo);
AHDO_ArbreHuffmanDOctets AHDO_creerFeuille(O_Octet o,int cout);
AHDO_ArbreHuffmanDOctets AHDO_creerArbre(AHDO_ArbreHuffmanDOctets f0,AHDO_ArbreHuffmanDOctets f1);
int AHDO_estUneFeuille(AHDO_ArbreHuffmanDOctets a);
O_Octet AHDO_element(AHDO_ArbreHuffmanDOctets a);
int AHDO_cout(AHDO_ArbreHuffmanDOctets a);
AHDO_ArbreHuffmanDOctets AHDO_filsBitA0(AHDO_ArbreHuffmanDOctets a);
AHDO_ArbreHuffmanDOctets AHDO_filsBitA1(AHDO_ArbreHuffmanDOctets a);
void AHDO_detruire(AHDO_ArbreHuffmanDOctets *pa);
FPAH_FilePrioriteDArbresHuffman FPAH_filePrioriteDArbresHuffman(void);
int FPAH_estVide(FPAH_FilePrioriteDArbresHuffman f);
int FPAH_indiceDInsertion(FPAH_FilePrioriteDArbresHuffman f,AHDO_ArbreHuffmanDOctets a);
void FPAH_decalerVersLaDroite(FPAH_FilePrioriteDArbresHuffman *pf,int debut);
void FPAH_enfiler(FPAH_FilePrioriteDArbresHuffman *pf,AHDO_ArbreHuffmanDOctets a);
void FPAH_defiler(FPAH_FilePrioriteDArbresHuffman *pf,AHDO_ArbreHuffmanDOctets *pa);
void FPAH_detruire(FPAH_FilePrioriteDArbresHuffman *pf);
TC_TableCodage TC_tableCodage(void);
void TC_ajouter(TC_TableCodage *ptc,O_Octet o,CB_CodeBinaire cb);
int TC_estPresent(TC_TableCodage tc,O_Octet o);
CB_CodeBinaire TC_code(TC_TableCodage tc,O_Octet o);
void TC_detruire(TC_TableCodage *ptc);
void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3);
void __libc_csu_fini(void);
void _fini(void);
void free(void * __ptr);
int putchar(int __c);
char * strcpy(char * __dest, char * __src);
int puts(char * __s);
size_t fread(void * __ptr, size_t __size, size_t __n, FILE * __stream);
int fclose(FILE * __stream);
size_t strlen(char * __s);
undefined __stack_chk_fail();
void __assert_fail(char * __assertion, char * __file, uint __line, char * __function);
undefined __libc_start_main();
int strcmp(char * __s1, char * __s2);
int feof(FILE * __stream);
undefined __gmon_start__();
void * memcpy(void * __dest, void * __src, size_t __n);
void * malloc(size_t __size);
int fseek(FILE * __stream, long __off, int __whence);
FILE * fopen(char * __filename, char * __modes);
size_t fwrite(void * __ptr, size_t __size, size_t __n, FILE * __s);

