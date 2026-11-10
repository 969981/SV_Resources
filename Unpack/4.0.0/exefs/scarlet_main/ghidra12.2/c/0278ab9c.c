/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278ab9c; name: FUN_0278ab9c
 */


void FUN_0278ab9c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_20 [2];
  undefined4 local_18 [2];
  
  FUN_007ae8d8();
  puVar1 = PTR_DAT_047d15e8;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  local_20[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 2),(Result *)local_20);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0x2c),(Result *)local_18);
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  nn::account::AsyncContext::AsyncContext((AsyncContext *)(param_1 + 0x18d));
  lVar2 = 0;
  param_1[0x191] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0x39) = 0;
    lVar2 = lVar2 + 4;
    *(undefined1 *)((long)plVar3 + 0x3b) = 0;
    plVar3 = (long *)((long)param_1 + lVar2);
    *(undefined1 *)(plVar3 + 7) = 0;
  } while (lVar2 != 0xc00);
  *param_1 = (long)(PTR_DAT_047d1738 + 0x10);
  FUN_0080f5d0(param_1 + 0x192);
  FUN_00807e4c(param_1 + 0x193);
  return;
}


