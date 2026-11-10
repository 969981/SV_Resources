/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021310ac; name: FUN_021310ac
 */


void FUN_021310ac(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xd8);
  if (*(undefined8 **)(param_1 + 0xd0) != puVar1) {
    puVar2 = *(undefined8 **)(param_1 + 0xd0);
    do {
      puVar3 = puVar2 + 1;
      FUN_01231fb4(*puVar2,param_2 & 1);
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
  }
  return;
}


