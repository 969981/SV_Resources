/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002bfd94; name: FUN_002bfd94
 */


void FUN_002bfd94(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  byte local_70 [16];
  undefined8 local_60;
  byte local_58 [16];
  undefined8 local_48;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined *puStack_28;
  
  FUN_002bfee0(local_70,*param_3,param_3[1]);
                    /* try { // try from 002bfdbc to 002bfdc3 has its CatchHandler @ 002bfe90 */
  lVar1 = FUN_002c6ebc(param_2 + 0x150,local_70);
  if (param_2 + 0x158 == lVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002bfe84 to 002bfe87 has its CatchHandler @ 002bfe90 */
    abort();
  }
                    /* try { // try from 002bfde0 to 002bfde3 has its CatchHandler @ 002bfe8c */
  lVar2 = FUN_002c6fcc(lVar1 + 0x40,local_58);
  if (lVar1 + 0x48 == lVar2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002bfe88 to 002bfe8b has its CatchHandler @ 002bfe8c */
    abort();
  }
  puStack_38 = PTR_FUN_047cc5f8;
  local_30 = *(undefined8 *)(lVar2 + 0x38);
  puStack_28 = PTR_FUN_047cc7f8;
                    /* try { // try from 002bfe10 to 002bfe2b has its CatchHandler @ 002bfe94 */
  local_40 = local_70;
  FUN_00391b20(param_1,"%s_%d",5,&local_40,2);
  if ((local_58[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  if ((local_70[0] & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,local_60);
  return;
}


