/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fb00f0; name: FUN_02fb00f0
 */


void FUN_02fb00f0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  char cVar5;
  undefined2 uVar6;
  char cVar7;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0;
  local_58 = 0;
  local_50 = -0x8000000000000000;
  FUN_02fb0288(&local_58,param_2,param_3,1);
  uVar4 = *(ulong *)(param_3 + 8) & 0xffffff;
  if (uVar4 == 0xffffff) {
    bVar2 = false;
    cVar5 = -1;
  }
  else {
    cVar5 = *(char *)(*(long *)(param_2 + 0xf8) + uVar4);
    bVar2 = (*(byte *)(*(long *)(param_2 + 0x38) + uVar4 * 0xc0 + 0x54) & 9) == 0;
  }
  uVar4 = *(ulong *)(param_3 + 0x18) & 0xffffff;
  if (uVar4 == 0xffffff) {
    bVar3 = false;
    cVar7 = -1;
  }
  else {
    cVar7 = *(char *)(*(long *)(param_2 + 0xf8) + uVar4);
    bVar3 = (*(byte *)(*(long *)(param_2 + 0x38) + uVar4 * 0xc0 + 0x54) & 9) == 0;
  }
  if ((cVar5 == -1) && (cVar7 == -1)) {
    uVar6 = 0xff;
  }
  else {
    uVar6 = *(undefined2 *)
             (*(long *)PTR_DAT_047e34d8 +
              (ulong)((uint)(byte)(cVar7 + 1U) * 0x20 + (uint)(byte)(cVar7 + 1U) +
                     (uint)(byte)(cVar5 + 1)) * 2 + 0x18);
  }
  if ((bool)(bVar3 | bVar2)) {
    *(undefined2 *)(local_58 + 2) = uVar6;
  }
  FUN_02fae920(param_1,param_2,param_3,*(undefined8 *)(*(long *)(param_2 + 0x488) + 0x38),&local_58,
               0,(int)local_50 + -1,param_4,param_5,param_6);
  lVar1 = local_50;
  uVar4 = (ulong)local_50._4_4_;
  local_50 = (ulong)local_50._4_4_ << 0x20;
  if ((-1 < lVar1) && (local_58 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_58,uVar4 * 0xc);
  }
  return;
}


