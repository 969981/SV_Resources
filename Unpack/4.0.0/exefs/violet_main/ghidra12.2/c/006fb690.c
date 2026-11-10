/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006fb690; name: FUN_006fb690
 */


void FUN_006fb690(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte local_70;
  undefined7 uStack_6f;
  ulong local_60;
  long *plStack_58;
  byte local_50;
  undefined7 uStack_4f;
  ulong local_40;
  long *plStack_38;
  
  uVar3 = *(undefined8 *)PTR_PTR_047cbcf8;
  uVar4 = *(undefined8 *)PTR_PTR_047cbd00;
  FUN_0024f2d0(&local_50,*(undefined4 *)(param_2 + 8));
  uVar1 = (ulong)&local_50 | 1;
  if ((local_50 & 1) != 0) {
    uVar1 = local_40;
  }
                    /* try { // try from 006fb6e4 to 006fb6f3 has its CatchHandler @ 006fb7c4 */
  FUN_006fef60(&local_70,uVar3,uVar4,uVar1);
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  uVar1 = (ulong)&local_70 | 1;
  if ((local_70 & 1) != 0) {
    uVar1 = local_60;
  }
                    /* try { // try from 006fb730 to 006fb737 has its CatchHandler @ 006fb7b8 */
  FUN_006fb7dc(param_1,uVar1);
  if ((local_70 & 1) != 0) {
    (**(code **)(*plStack_58 + 0x18))
              (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
  }
  uVar1 = (ulong)(*(byte *)(param_2 + 0x18) >> 1);
  lVar2 = param_2 + 0x19;
  if ((*(byte *)(param_2 + 0x18) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x20);
    lVar2 = *(long *)(param_2 + 0x28);
  }
                    /* try { // try from 006fb778 to 006fb7a3 has its CatchHandler @ 006fb7d8 */
  FUN_006fb8fc(param_1,lVar2,uVar1);
  uVar1 = (ulong)(*(byte *)(param_2 + 0x38) >> 1);
  lVar2 = param_2 + 0x39;
  if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x40);
    lVar2 = *(long *)(param_2 + 0x48);
  }
  FUN_006fba14(param_1,lVar2,uVar1);
  return;
}


