/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a3728; name: FUN_034a3728
 */


void FUN_034a3728(long *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  lVar3 = 0x230;
  if ((param_2 & 1) == 0) {
    lVar3 = 0x238;
  }
  iVar4 = (int)param_3;
  local_48 = 0x19;
  if (iVar4 == 0x8000000 || iVar4 == 0x4000000) {
    local_48 = 0x1a;
  }
  if ((iVar4 == 0x4000000) || (iVar4 == 0x2000000)) {
    local_54 = 0;
  }
  else {
    local_54 = 0x3f800000;
  }
  if (*(long *)((long)param_1 + lVar3) != 0) {
    FUN_034e6c0c(*(undefined8 *)PTR_DAT_047e7038,*(long *)((long)param_1 + lVar3),param_3,
                 param_4 & 0xffffffff,param_4 >> 0x20,0);
    return;
  }
  plVar1 = param_1 + 0x4d;
  if ((param_2 & 1) == 0) {
    plVar1 = (long *)((long)param_1 + 0x26c);
  }
  local_58 = (undefined4)*plVar1;
  local_68 = param_1 + 2;
  local_50 = (undefined4)param_4;
  uStack_4c = (undefined4)(param_4 >> 0x20);
  local_44 = 0x100;
  local_42 = 0;
  local_60 = param_3;
  lVar3 = FUN_034e6ab0(*(undefined8 *)PTR_DAT_047e7038,&local_68,0);
  if ((param_2 & 1) == 0) {
    param_1[0x47] = lVar3;
  }
  else {
    param_1[0x46] = lVar3;
    uVar2 = *(uint *)((long)param_1 + 699);
    *(uint *)((long)param_1 + 699) =
         uVar2 & 0xf0000000 | uVar2 & 0x7ffffff | (uint)(iVar4 == 0x1000000) << 0x1b;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,0xe,param_4 & 0xffffffff);
  if (lVar3 == 0) {
    (**(code **)(*param_1 + 0x28))(local_54,param_1,local_60,1);
  }
  return;
}


