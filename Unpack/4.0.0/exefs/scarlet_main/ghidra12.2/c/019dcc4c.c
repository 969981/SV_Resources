/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019dcc4c; name: FUN_019dcc4c
 */


void FUN_019dcc4c(undefined1 *param_1,byte *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((1 < *param_2) ||
     (puVar3 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if (((*PTR_DAT_047d4538 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4538), iVar2 != 0)) {
      FUN_01667884(&local_50);
      puVar3 = PTR_DAT_047d4540;
      puVar1 = (undefined8 *)(PTR_DAT_047d4540 + 0x20);
      *(undefined8 *)(PTR_DAT_047d4540 + 0x28) = uStack_28;
      *puVar1 = local_30;
      *(undefined8 *)(puVar3 + 8) = uStack_48;
      *(undefined8 *)puVar3 = local_50;
      *(undefined8 *)(puVar3 + 0x18) = uStack_38;
      *(undefined8 *)(puVar3 + 0x10) = uStack_40;
      __cxa_guard_release(PTR_DAT_047d4538);
    }
    else {
      puVar3 = PTR_DAT_047d4540;
    }
  }
  FUN_019dcd10(auStack_78,puVar3);
  *param_1 = 1;
  memcpy(&local_50,auStack_78,0x28);
  FUN_019dcfcc(param_1 + 8,&local_50);
  return;
}


