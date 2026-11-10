/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa821c; name: FUN_01fa821c
 */


void FUN_01fa821c(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar2 = &DAT_cbf29ce484222645;
  FUN_00d9ec44(auStack_48,0,0xdcbfd50a277e546d);
  bVar1 = *param_2;
  while (bVar1 != 0) {
    param_2 = param_2 + 1;
    puVar2 = (undefined1 *)(((ulong)puVar2 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *param_2;
  }
  FUN_00d9ec44(auStack_60,2,puVar2);
  FUN_016745bc(param_1,auStack_48,auStack_60);
  return;
}


