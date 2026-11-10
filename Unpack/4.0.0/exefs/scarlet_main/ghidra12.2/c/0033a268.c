/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033a268; name: FUN_0033a268
 */


void FUN_0033a268(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = PTR_LAB_047ccc98;
  if (((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) && (*(long *)(*param_1 + 0x20) != 0)) {
    param_1[5] = 0;
    param_1[3] = (long)puVar1;
    param_1[4] = (long)param_1;
    if (param_1[7] != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = *(long *)(param_2 + 8);
    param_1[7] = *(long *)(lVar3 + 0x70);
    param_1[6] = *(long *)(lVar3 + 0x80);
    *(long **)(lVar3 + 0x80) = param_1 + 2;
  }
  puVar2 = (undefined8 *)FUN_003443b0(param_1 + 10,0);
  if (PTR_DAT_047ccca0[0x10] != '\0') {
    FUN_0037b950("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0xb5,1,puVar2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0033a2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)(puVar2,param_2);
  return;
}


