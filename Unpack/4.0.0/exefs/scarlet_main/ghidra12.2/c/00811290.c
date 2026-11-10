/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00811290; name: FUN_00811290
 */


void FUN_00811290(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  pcVar9 = *(code **)(PTR_DAT_047d1868 + 0x38);
  puVar1 = PTR_DAT_047d1868 + 0x10;
  local_78 = puVar1;
  (*pcVar9)(&local_78);
  local_70 = 0x65;
  lVar6 = param_1 + 0x48;
  lVar3 = param_1 + 0x8b8;
  if (*(char *)(param_1 + 0xa18) != '\0') {
    lVar3 = param_1 + 0x898;
  }
  lVar2 = param_1 + 0x30;
  if (*(int *)(param_1 + 0x58) != 0) {
    lVar4 = FUN_0078fac8(lVar6);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
    }
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    puVar8 = (undefined8 *)(lVar4 + 0x10);
    *puVar8 = 0;
    plVar7 = (long *)(lVar4 + 0x30);
    *plVar7 = 0;
    FUN_0284e338(puVar8);
    *plVar7 = (long)(PTR_DAT_047d1868 + 0x10);
    (*pcVar9)(plVar7);
    FUN_0078f9e0(lVar2,lVar2,lVar4);
    FUN_0284e39c(puVar8,lVar3);
    *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
    *(undefined8 *)(lVar4 + 0x40) = uStack_68;
    if (*(int *)(param_1 + 0x58) != 0) {
      lVar4 = FUN_0078fac8(lVar6);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
      }
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      puVar8 = (undefined8 *)(lVar4 + 0x10);
      *puVar8 = 0;
      plVar7 = (long *)(lVar4 + 0x30);
      *plVar7 = 0;
      FUN_0284e338(puVar8);
      *plVar7 = (long)(PTR_DAT_047d1868 + 0x10);
      (*pcVar9)(plVar7);
      FUN_0078f9e0(lVar2,lVar2,lVar4);
      FUN_0284e39c(puVar8,lVar3);
      *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
      *(undefined8 *)(lVar4 + 0x40) = uStack_68;
      if (*(int *)(param_1 + 0x58) != 0) {
        lVar4 = FUN_0078fac8(lVar6);
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
        }
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *(undefined8 *)(lVar4 + 0x40) = 0;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(undefined8 *)(lVar4 + 0x20) = 0;
        *(undefined8 *)(lVar4 + 0x28) = 0;
        puVar8 = (undefined8 *)(lVar4 + 0x10);
        *puVar8 = 0;
        plVar7 = (long *)(lVar4 + 0x30);
        *plVar7 = 0;
        FUN_0284e338(puVar8);
        *plVar7 = (long)(PTR_DAT_047d1868 + 0x10);
        (*pcVar9)(plVar7);
        FUN_0078f9e0(lVar2,lVar2,lVar4);
        FUN_0284e39c(puVar8,lVar3);
        *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
        *(undefined8 *)(lVar4 + 0x40) = uStack_68;
      }
    }
  }
  local_78 = puVar1;
  (*pcVar9)(&local_78);
  puVar1 = PTR_DAT_047d1868;
  local_70 = 0x66;
  lVar3 = param_1 + 0x8b8;
  if (*(char *)(param_1 + 0xa18) != '\0') {
    lVar3 = param_1 + 0x898;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    lVar4 = FUN_0078fac8(lVar6);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
    }
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    puVar8 = (undefined8 *)(lVar4 + 0x10);
    *puVar8 = 0;
    plVar7 = (long *)(lVar4 + 0x30);
    *plVar7 = 0;
    FUN_0284e338(puVar8);
    *plVar7 = (long)(puVar1 + 0x10);
    (*pcVar9)(plVar7);
    FUN_0078f9e0(lVar2,lVar2,lVar4);
    FUN_0284e39c(puVar8,lVar3);
    *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
    *(undefined8 *)(lVar4 + 0x40) = uStack_68;
    if (*(int *)(param_1 + 0x58) != 0) {
      lVar4 = FUN_0078fac8(lVar6);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
      }
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      puVar8 = (undefined8 *)(lVar4 + 0x10);
      *puVar8 = 0;
      plVar7 = (long *)(lVar4 + 0x30);
      *plVar7 = 0;
      FUN_0284e338(puVar8);
      *plVar7 = (long)(puVar1 + 0x10);
      (*pcVar9)(plVar7);
      FUN_0078f9e0(lVar2,lVar2,lVar4);
      FUN_0284e39c(puVar8,lVar3);
      *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
      *(undefined8 *)(lVar4 + 0x40) = uStack_68;
      if (*(int *)(param_1 + 0x58) != 0) {
        lVar4 = FUN_0078fac8(lVar6);
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
        }
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *(undefined8 *)(lVar4 + 0x40) = 0;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(undefined8 *)(lVar4 + 0x20) = 0;
        *(undefined8 *)(lVar4 + 0x28) = 0;
        puVar8 = (undefined8 *)(lVar4 + 0x10);
        *puVar8 = 0;
        plVar7 = (long *)(lVar4 + 0x30);
        *plVar7 = 0;
        FUN_0284e338(puVar8);
        *plVar7 = (long)(puVar1 + 0x10);
        (*pcVar9)(plVar7);
        FUN_0078f9e0(lVar2,lVar2,lVar4);
        FUN_0284e39c(puVar8,lVar3);
        *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
        *(undefined8 *)(lVar4 + 0x40) = uStack_68;
      }
    }
  }
  lVar3 = param_1 + 0x8f8;
  if (*(char *)(param_1 + 0xa18) != '\0') {
    lVar3 = param_1 + 0x8d8;
  }
  uVar5 = FUN_0078b12c(lVar3);
  if ((uVar5 & 1) != 0) {
    local_78 = puVar1 + 0x10;
    (*pcVar9)(&local_78);
    local_70 = 0x67;
    lVar3 = param_1 + 0x8f8;
    if (*(char *)(param_1 + 0xa18) != '\0') {
      lVar3 = param_1 + 0x8d8;
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      lVar4 = FUN_0078fac8(lVar6);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
      }
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      puVar8 = (undefined8 *)(lVar4 + 0x10);
      *puVar8 = 0;
      plVar7 = (long *)(lVar4 + 0x30);
      *plVar7 = 0;
      FUN_0284e338(puVar8);
      *plVar7 = (long)(puVar1 + 0x10);
      (*pcVar9)(plVar7);
      FUN_0078f9e0(lVar2,lVar2,lVar4);
      FUN_0284e39c(puVar8,lVar3);
      *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
      *(undefined8 *)(lVar4 + 0x40) = uStack_68;
      if (*(int *)(param_1 + 0x58) != 0) {
        lVar4 = FUN_0078fac8(lVar6);
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = lVar4 - *(int *)(param_1 + 0x5c);
        }
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *(undefined8 *)(lVar4 + 0x40) = 0;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(undefined8 *)(lVar4 + 0x20) = 0;
        *(undefined8 *)(lVar4 + 0x28) = 0;
        puVar8 = (undefined8 *)(lVar4 + 0x10);
        *puVar8 = 0;
        plVar7 = (long *)(lVar4 + 0x30);
        *plVar7 = 0;
        FUN_0284e338(puVar8);
        *plVar7 = (long)(puVar1 + 0x10);
        (*pcVar9)(plVar7);
        FUN_0078f9e0(lVar2,lVar2,lVar4);
        FUN_0284e39c(puVar8,lVar3);
        *(ulong *)(lVar4 + 0x38) = CONCAT44(uStack_6c,local_70);
        *(undefined8 *)(lVar4 + 0x40) = uStack_68;
        if (*(int *)(param_1 + 0x58) != 0) {
          lVar6 = FUN_0078fac8(lVar6);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = lVar6 - *(int *)(param_1 + 0x5c);
          }
          *(undefined8 *)(lVar6 + 0x38) = 0;
          *(undefined8 *)(lVar6 + 0x40) = 0;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          *(undefined8 *)(lVar6 + 0x20) = 0;
          *(undefined8 *)(lVar6 + 0x28) = 0;
          puVar8 = (undefined8 *)(lVar6 + 0x10);
          *puVar8 = 0;
          plVar7 = (long *)(lVar6 + 0x30);
          *plVar7 = 0;
          FUN_0284e338(puVar8);
          *plVar7 = (long)(puVar1 + 0x10);
          (*pcVar9)(plVar7);
          FUN_0078f9e0(lVar2,lVar2,lVar6);
          FUN_0284e39c(puVar8,lVar3);
          *(ulong *)(lVar6 + 0x38) = CONCAT44(uStack_6c,local_70);
          *(undefined8 *)(lVar6 + 0x40) = uStack_68;
        }
      }
    }
  }
  return;
}


