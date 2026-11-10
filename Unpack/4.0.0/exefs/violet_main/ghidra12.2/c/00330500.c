/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00330500; name: FUN_00330500
 */


void FUN_00330500(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_047ef4c0 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x60);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
                    /* try { // try from 00330538 to 00330543 has its CatchHandler @ 00330560 */
      uVar2 = FUN_0038ccb0("dns:///");
      puVar1[0xb] = uVar2;
    }
    DAT_047ef4c0 = puVar1;
  }
  return;
}


