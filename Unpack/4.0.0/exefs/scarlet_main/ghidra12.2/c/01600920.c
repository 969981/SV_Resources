/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01600920; name: FUN_01600920
 */


void FUN_01600920(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  uint *puVar3;
  undefined **local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = &PTR_FUN_04601cf8;
  local_58 = (long *)0x0;
  uVar1 = FUN_00dc5c18(&local_60,0,param_2,0,*(undefined8 *)(param_1 + 0x480));
  if (((((uVar1 & 1) != 0) && (local_58 != (long *)0x0)) && ((*(byte *)(local_58 + 0x3d) & 1) != 0))
     && (lVar2 = (**(code **)(*local_58 + 0x70))(), lVar2 != 0)) {
    if ((local_58 == (long *)0x0) || ((*(byte *)(local_58 + 0x3d) & 1) == 0)) {
      lVar2 = 0;
    }
    else {
      puVar3 = (uint *)(**(code **)(*local_58 + 0x70))();
      lVar2 = (long)puVar3 + (ulong)*puVar3;
    }
    FUN_0160b9cc(param_1,lVar2);
  }
  FUN_00db239c(&local_60);
  return;
}


