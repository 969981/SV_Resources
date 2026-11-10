/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02987088; name: FUN_02987088
 */


void FUN_02987088(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [56];
  undefined1 *local_18;
  
  FUN_012466dc(auStack_68);
  FUN_0124e224(auStack_68,param_2);
  local_18 = auStack_68;
  FUN_01461214(param_1);
  uVar1 = FUN_01246734();
  FUN_0124673c(uVar1,auStack_70,&local_18);
  return;
}


