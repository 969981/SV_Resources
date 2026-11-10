/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f5530; name: FUN_005f5530
 */


void FUN_005f5530(byte *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  byte *pbVar5;
  byte local_40;
  undefined7 uStack_3f;
  ulong local_30;
  long *plStack_28;
  
                    /* try { // try from 005f5544 to 005f554b has its CatchHandler @ 005f5658 */
  FUN_0060f904(param_2);
  if ((*param_1 & 1) == 0) {
    pbVar5 = param_1 + 1;
  }
  else {
    pbVar5 = *(byte **)(param_1 + 0x10);
  }
  FUN_00213520(&local_40,pbVar5,0);
  uVar1 = (ulong)&local_40 | 1;
  if ((local_40 & 1) != 0) {
    uVar1 = local_30;
  }
                    /* try { // try from 005f5584 to 005f558b has its CatchHandler @ 005f5644 */
  FUN_005f565c(param_2,uVar1);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  uVar2 = FUN_00258a7c(param_1 + 0x20);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 == 0) {
    puVar4 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
                    /* try { // try from 005f55d0 to 005f5617 has its CatchHandler @ 005f5658 */
    lVar3 = FUN_0026b02c(puVar4);
    *(long *)(param_2 + 0x20) = lVar3;
  }
  FUN_0026ac80(lVar3,uVar2);
  if ((param_1[0x28] & 1) == 0) {
    pbVar5 = param_1 + 0x29;
  }
  else {
    pbVar5 = *(byte **)(param_1 + 0x38);
  }
  FUN_005f577c(param_2,pbVar5);
  lVar3 = *(long *)(param_2 + 0x28);
  if (lVar3 == 0) {
    puVar4 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar3 = FUN_00616230(puVar4);
    *(long *)(param_2 + 0x28) = lVar3;
  }
  FUN_005e0960(lVar3,param_1 + 0x48);
  return;
}


