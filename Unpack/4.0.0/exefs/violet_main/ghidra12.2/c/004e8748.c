/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e8748; name: FUN_004e8748
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e8748(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  uStack_78 = _UNK_03caab88;
  local_80 = _DAT_03caab80;
  local_70 = 0;
  uStack_68 = 0;
  local_90 = 0;
  local_60 = PTR_FUN_047cda38;
  puStack_58 = PTR_LAB_047cda40;
  FUN_00520320(auStack_a8);
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  uStack_40 = 0;
                    /* try { // try from 004e879c to 004e87cb has its CatchHandler @ 004e8824 */
  uVar2 = FUN_004e62fc(auStack_a8);
  uVar3 = FUN_0052d43c(uVar2,param_2,param_3);
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004e884c(param_1 + 8,uVar2,param_2,param_3);
  }
  if (local_38 != 0) {
                    /* try { // try from 004e87e8 to 004e87ef has its CatchHandler @ 004e8810 */
    FUN_00520cb4(auStack_a8);
  }
  FUN_005203cc(auStack_a8);
  return uVar1 & 1;
}


