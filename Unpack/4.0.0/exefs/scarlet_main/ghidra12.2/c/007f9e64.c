/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f9e64; name: FUN_007f9e64
 */


void FUN_007f9e64(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined4 local_28 [2];
  
  *param_1 = (long)(PTR_DAT_047d15a8 + 0x10);
  FUN_007eac3c(param_1 + 1);
  FUN_00797e48(param_1 + 6);
  *(undefined4 *)(param_1 + 7) = 0;
  puVar3 = PTR_FUN_047d15b8;
  puVar2 = PTR_DAT_047d15b0;
  param_1[0xc] = 0;
  param_1[10] = (long)puVar3;
  param_1[0xb] = 0;
  param_1[8] = (long)(puVar2 + 0x10);
  param_1[9] = (long)param_1;
  FUN_007c9e4c(param_1 + 0xd,0);
  *(undefined1 *)(param_1 + 0x16) = 4;
  *(undefined4 *)((long)param_1 + 0xb4) = 5;
  *(undefined4 *)(param_1 + 0x17) = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0xbc),(Result *)local_28);
  plVar1 = param_1 + 0x1a;
  param_1[0x19] = 0;
  FUN_007fa154(plVar1);
  FUN_007c70a8(param_1 + 0xdd);
  *(undefined1 *)(param_1 + 0xdf) = 0;
  if ((long *)param_1[0x1b] != plVar1) {
    plVar4 = (long *)param_1[0x1b];
    do {
      plVar5 = (long *)plVar4[1];
      *plVar4 = 0;
      plVar4[1] = 0;
      FUN_0078fa04(param_1 + 0x1d,param_1 + 0x1d,(long)*(int *)((long)param_1 + 0xfc) + (long)plVar4
                  );
      plVar4 = plVar5;
    } while (plVar5 != plVar1);
  }
  FUN_0078f9d4(plVar1);
  return;
}


