/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024c5724; name: FUN_024c5724
 */


void FUN_024c5724(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 local_50 [2];
  undefined1 local_40 [16];
  undefined8 uStack_30;
  
  puVar1 = PTR_LAB_047dee58;
  if (DAT_0484efe0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_50[0] = param_2;
  local_40 = FUN_024c85fc(param_4,puVar1,0,local_50);
  *param_1 = 1;
  uStack_30 = param_3;
  FUN_024c863c(param_1 + 8,local_40);
  return;
}


