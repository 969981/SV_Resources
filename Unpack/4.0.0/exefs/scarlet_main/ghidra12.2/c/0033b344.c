/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033b344; name: FUN_0033b344
 */


void FUN_0033b344(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  byte local_38 [16];
  undefined1 *local_28;
  
  if (*(int *)(param_2 + 0x80) == 0) {
    bVar1 = false;
    puVar2 = &DAT_03c886bc;
  }
  else {
    FUN_0035a7b0(local_38);
    if ((local_38[0] & 1) == 0) {
      puVar2 = (undefined1 *)((ulong)local_38 | 1);
    }
    else {
      puVar2 = local_28;
    }
    bVar1 = true;
  }
                    /* try { // try from 0033b390 to 0033b3a7 has its CatchHandler @ 0033b3d4 */
  uVar3 = FUN_0038ccb0(puVar2);
  FUN_00344220(param_1,"grpc.subchannel_address",uVar3);
  if ((bVar1) && ((local_38[0] & 1) != 0)) {
    FUN_0049e790(PTR_LAB_047cba48,local_28);
  }
  return;
}


