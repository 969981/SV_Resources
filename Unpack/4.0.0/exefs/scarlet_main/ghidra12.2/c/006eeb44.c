/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006eeb44; name: FUN_006eeb44
 */


void FUN_006eeb44(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long local_70;
  long lStack_68;
  long local_60;
  undefined8 uStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  undefined8 local_38;
  
  FUN_006eedc4(&local_50,param_2,param_3,0);
  if (local_50 != 0) {
    *param_1 = local_50;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = lStack_40;
    param_1[1] = lStack_48;
    return;
  }
  uVar1 = param_2[1];
  uVar6 = *param_2 + 1;
  uVar5 = uVar1 * 3 >> 2 & 0xfffffffffffffff;
  if (uVar6 < uVar5) {
    if ((uVar1 < 9) || ((uVar1 * 3 & 0x3fffffffffffffff) >> 4 < uVar6)) goto LAB_006eebb8;
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
    } while ((uVar6 * 5 >> 2) + 1 << (uVar7 & 0x3f) < uVar5);
    uVar6 = uVar1 >> (uVar7 & 0x3f);
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    if (uVar6 == uVar1) goto LAB_006eebb8;
  }
  else {
    if (0x800000000000000 < uVar1) goto LAB_006eebb8;
    uVar6 = uVar1 << 1;
  }
  FUN_006eefb8(param_2,uVar6);
  FUN_006eedc4(&local_70,param_2,param_3,0);
  lStack_40 = local_60;
  local_38 = uStack_58;
  lStack_48 = lStack_68;
  local_50 = local_70;
LAB_006eebb8:
  uVar2 = local_38;
  lVar3 = param_2[5];
  if (lVar3 == 0) {
    puVar4 = (undefined8 *)FUN_0049e6c0(0x18);
  }
  else {
    if (*(long *)(lVar3 + 0x70) != 0) {
      FUN_00520d08(lVar3,0,0x18);
    }
    puVar4 = (undefined8 *)FUN_00520c00(lVar3,0x18);
  }
  uVar8 = *param_3;
  puVar4[1] = param_3[1];
  *puVar4 = uVar8;
  FUN_006eecc8(&local_70,param_2,uVar2,puVar4);
  *param_2 = *param_2 + 1;
  param_1[2] = local_60;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[1] = lStack_68;
  *param_1 = local_70;
  return;
}


