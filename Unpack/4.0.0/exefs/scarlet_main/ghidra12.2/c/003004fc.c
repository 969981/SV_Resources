/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003004fc; name: FUN_003004fc
 */


void FUN_003004fc(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long local_28;
  undefined8 *local_18;
  
  local_28 = *param_2;
  *param_2 = 0;
                    /* try { // try from 00300514 to 0030051f has its CatchHandler @ 003005b8 */
  FUN_00300858(&local_18,&local_28);
  puVar1 = local_18;
  local_18 = (undefined8 *)0x0;
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar1;
  if (puVar2 == (undefined8 *)0x0) {
    local_18 = (undefined8 *)0x0;
  }
  else {
    (**(code **)*puVar2)(puVar2);
    FUN_0049e790(PTR_LAB_047cba48,puVar2);
    puVar1 = local_18;
    local_18 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      FUN_0049e790(PTR_LAB_047cba48,puVar1);
    }
  }
  if (local_28 != 0) {
    local_28 = 0;
                    /* try { // try from 003005a0 to 003005a3 has its CatchHandler @ 003005b4 */
    FUN_003b8e30();
  }
  return;
}


