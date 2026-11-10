/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005eb600; name: FUN_005eb600
 */


void FUN_005eb600(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte local_40;
  undefined7 uStack_3f;
  ulong local_30;
  long *plStack_28;
  
                    /* try { // try from 005eb614 to 005eb61f has its CatchHandler @ 005eb72c */
  FUN_00604468(param_1,0);
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
                    /* try { // try from 005eb640 to 005eb64b has its CatchHandler @ 005eb718 */
  FUN_005f87d0(&local_40,*(undefined8 *)PTR_PTR_047cbcf8,param_2);
  uVar1 = (ulong)&local_40 | 1;
  if ((local_40 & 1) != 0) {
    uVar1 = local_30;
  }
                    /* try { // try from 005eb660 to 005eb667 has its CatchHandler @ 005eb6ec */
  FUN_005eb730(param_1,uVar1);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  FUN_00213580(&local_40);
  uVar1 = (ulong)&local_40 | 1;
  if ((local_40 & 1) != 0) {
    uVar1 = local_30;
  }
                    /* try { // try from 005eb6ac to 005eb6b3 has its CatchHandler @ 005eb6e8 */
  FUN_005eb850(param_1,uVar1);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  return;
}


