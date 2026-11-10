/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02661ffc; name: FUN_02661ffc
 */


void FUN_02661ffc(undefined8 param_1,byte *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  cVar3 = DAT_048559d8;
  if ((1 < *param_2) ||
     (puVar5 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4538 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047d4538);
      if (iVar4 == 0) {
        puVar5 = PTR_DAT_047d4540;
      }
      else {
        FUN_01667884(&local_50);
        puVar5 = PTR_DAT_047d4540;
        puVar1 = (undefined8 *)(PTR_DAT_047d4540 + 0x20);
        *(undefined8 *)(PTR_DAT_047d4540 + 0x28) = uStack_28;
        *puVar1 = local_30;
        *(undefined8 *)(puVar5 + 8) = uStack_48;
        *(undefined8 *)puVar5 = local_50;
        *(undefined8 *)(puVar5 + 0x18) = uStack_38;
        *(undefined8 *)(puVar5 + 0x10) = uStack_40;
        __cxa_guard_release(PTR_DAT_047d4538);
      }
    }
    else {
      puVar5 = PTR_DAT_047d4540;
    }
  }
  puVar2 = PTR_FUN_047e0538;
  if (cVar3 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  FUN_026647bc(param_1,puVar2,0,puVar5);
  return;
}


