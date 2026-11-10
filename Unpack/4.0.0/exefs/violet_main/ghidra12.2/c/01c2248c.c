/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c2248c; name: FUN_01c2248c
 */


void FUN_01c2248c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_18 [8];
  
  uVar1 = DAT_048124d0;
  FUN_01c1a878(auStack_40);
  puVar2 = (undefined8 *)FUN_01c23cd8(param_3);
  local_50 = *puVar2;
  uStack_48 = puVar2[1];
  FUN_01c23d60(auStack_18,uVar1,auStack_40,&local_50);
  FUN_01c23dc0(param_1,auStack_18);
  FUN_01c226f8(auStack_18);
  FUN_01c1aab8(auStack_40);
  return;
}


