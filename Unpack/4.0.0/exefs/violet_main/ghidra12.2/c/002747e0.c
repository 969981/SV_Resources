/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002747e0; name: FUN_002747e0
 */


void FUN_002747e0(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  FUN_0038dcd0(&DAT_047ee798,&LAB_002749d0);
  FUN_0038db40(&DAT_047ee7b0);
  iVar1 = DAT_047ee79c + 1;
  if (DAT_047ee79c == 0) {
    DAT_047ee79c = iVar1;
    if (DAT_047ee790 == '\x01') {
      DAT_047ee790 = '\0';
      FUN_0038dcb0(&DAT_047ee7a0);
    }
    FUN_0038e818();
    FUN_00354230();
    FUN_0034df30();
    FUN_00377e40();
    FUN_00369cb0();
    FUN_00375ea0();
    FUN_00370990();
    FUN_0034acc0();
    FUN_002fa050();
    FUN_0035335c();
    FUN_00354250();
    FUN_00370d20();
    FUN_0038f8b0();
    FUN_0034bfb8();
    thunk_FUN_002f7d30();
    if (0 < DAT_047ee794) {
      lVar2 = 0;
      puVar3 = &DAT_047ee7d0;
      iVar1 = DAT_047ee794;
      do {
        if ((code *)*puVar3 != (code *)0x0) {
                    /* try { // try from 002748e4 to 002748e7 has its CatchHandler @ 002749a4 */
          (*(code *)*puVar3)();
          iVar1 = DAT_047ee794;
        }
        lVar2 = lVar2 + 1;
        puVar3 = puVar3 + 2;
      } while (lVar2 < iVar1);
    }
                    /* try { // try from 002748ec to 0027497b has its CatchHandler @ 002749a8 */
    FUN_002fa060();
    FUN_003709d0(1,10000,PTR_LAB_047cc3b0,0);
    FUN_003709d0(3,10000,PTR_LAB_047cc3b0,0);
    FUN_003709d0(4,10000,PTR_LAB_047cc3b0,0);
    FUN_003709d0(2,10000,&LAB_00274d60,PTR_PTR_047cc3b8);
    FUN_003709d0(4,0x7fffffff,&LAB_00274d70,PTR_PTR_047cc3c0);
    FUN_0038c510();
    FUN_00370a80();
    thunk_FUN_003619c0();
    iVar1 = DAT_047ee79c;
  }
  else if ((iVar1 == 2) && (DAT_047ee790 == '\x01')) {
    DAT_047ee790 = '\0';
                    /* try { // try from 00274840 to 002748a7 has its CatchHandler @ 002749a8 */
    FUN_0038dcb0(&DAT_047ee7a0);
    iVar1 = DAT_047ee79c;
  }
  DAT_047ee79c = iVar1;
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoSDK_gRPC_For_NPLN-0_0_0-Release");
                    /* try { // try from 00274988 to 00274993 has its CatchHandler @ 002749a0 */
  FUN_0038db60(&DAT_047ee7b0);
  return;
}


