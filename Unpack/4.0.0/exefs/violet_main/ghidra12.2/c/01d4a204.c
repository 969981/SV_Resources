/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d4a204; name: FUN_01d4a204
 */


void FUN_01d4a204(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_840 [2064];
  
  uVar1 = 0x70;
  if (DAT_04830fd0 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  uVar2 = FUN_01d4c110(param_2);
  FUN_013e6f68(auStack_840,uVar2);
  FUN_01d4c1b0(param_1,uVar1,auStack_840);
  FUN_013e6dc0(auStack_840);
  return;
}


