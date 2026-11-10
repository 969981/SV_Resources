/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024d86bc; name: FUN_024d86bc
 */


void FUN_024d86bc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  cVar2 = DAT_0484f098;
  if ((1 < *param_4) ||
     (puVar4 = *(undefined8 **)(param_4 + 8), *(undefined8 **)(param_4 + 8) == (undefined8 *)0x0)) {
    if ((*PTR_DAT_047d7bc0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d7bc0);
      puVar4 = (undefined8 *)PTR_DAT_047d7bc8;
      if (iVar3 != 0) {
        *(undefined8 *)(PTR_DAT_047d7bc8 + 0x10) = 0;
        *(undefined8 *)((long)puVar4 + 0x18) = 0;
        *puVar4 = 0;
        *(undefined8 *)((long)puVar4 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d7bc0);
      }
    }
    else {
      puVar4 = (undefined8 *)PTR_DAT_047d7bc8;
    }
  }
  local_68 = puVar4[3];
  puVar1 = PTR_FUN_047defc8;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_78 = puVar4[1];
  local_80 = *puVar4;
  uStack_70 = puVar4[2];
  local_90[0] = param_2;
  FUN_024da8e4(&local_60,param_3,puVar1,0,&local_80,local_90);
  *param_1 = 1;
  local_40 = local_60;
  uStack_38 = uStack_58;
  local_30 = local_50;
  uStack_28 = uStack_48;
  FUN_017b9f00(param_1 + 8,&local_40);
  return;
}


