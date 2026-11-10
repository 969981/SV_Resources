/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00354004; name: FUN_00354004
 */


void FUN_00354004(void)

{
  undefined *puVar1;
  
  if (DAT_047ef618 == (undefined8 *)0x0) {
    DAT_047ef618 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    puVar1 = PTR_DAT_047ccdf8;
    if (DAT_047ef618 != (undefined8 *)0x0) {
      *DAT_047ef618 = "default-executor";
      DAT_047ef618[4] = 0;
      DAT_047ef618[3] = 0;
      DAT_047ef618[2] = (long)*(int *)puVar1;
    }
    DAT_047ef620 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (DAT_047ef620 != (undefined8 *)0x0) {
      *DAT_047ef620 = "resolver-executor";
      DAT_047ef620[4] = 0;
      DAT_047ef620[3] = 0;
      DAT_047ef620[2] = (long)*(int *)puVar1;
    }
    FUN_003535e0(DAT_047ef618,1);
    FUN_003535e0(DAT_047ef620,1);
    return;
  }
  if (DAT_047ef620 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


