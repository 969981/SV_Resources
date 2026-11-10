/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032cc30; name: FUN_0032cc30
 */


void FUN_0032cc30(void)

{
  undefined8 *puVar1;
  undefined8 *local_18;
  
  local_18 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,8);
  if (local_18 != (undefined8 *)0x0) {
    *local_18 = &PTR_FUN_044957a0;
  }
                    /* try { // try from 0032cc5c to 0032cc67 has its CatchHandler @ 0032cca0 */
  FUN_0032f8b8(1,&local_18);
  puVar1 = local_18;
  local_18 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_0049e790(PTR_LAB_047cba48,puVar1);
  }
  return;
}


