/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003005d8; name: FUN_003005d8
 */


void FUN_003005d8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_50 [32];
  
  FUN_0038db40(param_2 + 0x10);
                    /* try { // try from 00300600 to 0030060b has its CatchHandler @ 003006cc */
  FUN_003673f0(auStack_50,param_3);
                    /* try { // try from 00300610 to 003006a7 has its CatchHandler @ 003006d0 */
  lVar2 = FUN_003427d0(*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),auStack_50,0)
  ;
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x28);
    lVar1 = *(long *)(lVar2 + 0x30);
    if (lVar1 == 0) {
      *(long *)(param_2 + 0x38) = lVar3;
    }
    else {
      *(long *)(lVar1 + 0x28) = lVar3;
      lVar3 = *(long *)(lVar2 + 0x28);
    }
    plVar4 = (long *)(param_2 + 0x40);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0x30);
    }
    *plVar4 = lVar1;
    if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 003006c4 to 003006c7 has its CatchHandler @ 003006d0 */
      abort();
    }
    plVar4 = (long *)(param_2 + 0x38);
    lVar3 = *plVar4;
    *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + -1;
    if (lVar3 == 0) {
      *(long *)(param_2 + 0x38) = lVar2;
      plVar4 = (long *)(param_2 + 0x40);
    }
    else {
      *(long *)(lVar3 + 0x30) = lVar2;
    }
    *plVar4 = lVar2;
    *(long *)(lVar2 + 0x28) = lVar3;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + 1;
    (**(code **)(**(long **)(lVar2 + 0x20) + 0x10))(param_1);
  }
                    /* try { // try from 003006a8 to 003006af has its CatchHandler @ 003006c8 */
  FUN_0038db60(param_2 + 0x10);
  return;
}


