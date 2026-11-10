/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006ebe50; name: FUN_006ebe50
 */


void FUN_006ebe50(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  byte local_40;
  undefined7 uStack_3f;
  ulong local_30;
  long *plStack_28;
  
                    /* try { // try from 006ebe7c to 006ebe87 has its CatchHandler @ 006ebf40 */
  FUN_006fed10(&local_40,*(undefined8 *)PTR_PTR_047cbcf8,*(undefined8 *)PTR_PTR_047cbd00);
  uVar1 = (ulong)&local_40 | 1;
  if ((local_40 & 1) != 0) {
    uVar1 = local_30;
  }
                    /* try { // try from 006ebe9c to 006ebea3 has its CatchHandler @ 006ebf2c */
  FUN_006ebf48(param_1,uVar1);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  iVar3 = *(int *)(param_2 + 8);
  if (2 < iVar3 - 1U) {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x7c) = iVar3;
  lVar2 = param_2 + 0x11;
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_2 + 0x20);
  }
                    /* try { // try from 006ebef0 to 006ebf1b has its CatchHandler @ 006ebf44 */
  FUN_006ec068(param_1,lVar2);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x30);
  lVar2 = param_2 + 0x39;
  if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
    lVar2 = *(long *)(param_2 + 0x48);
  }
  FUN_006ec188(param_1,lVar2);
  return;
}


