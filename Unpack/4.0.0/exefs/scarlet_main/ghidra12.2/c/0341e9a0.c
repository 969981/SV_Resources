/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0341e9a0; name: FUN_0341e9a0
 */


void FUN_0341e9a0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long local_28;
  
  if ((*(char *)(param_1 + 0xb8) == '\0') ||
     (puVar10 = *(undefined8 **)(param_1 + 0x68), puVar10 == (undefined8 *)0x0)) goto LAB_0341ea64;
  iVar1 = *(int *)(puVar10 + 0x10);
  uVar4 = iVar1 - 1;
  *(uint *)(puVar10 + 0x10) = uVar4;
  if (iVar1 == 0 || uVar4 == 0) {
    if (uVar4 == 0) {
LAB_0341e9f0:
      lVar5 = puVar10[5];
      if (lVar5 != 0) {
        uVar4 = ((uint)lVar5 ^ (uint)lVar5 >> 0x10) * -0x7a143595;
        uVar4 = (uVar4 ^ uVar4 >> 0xd) * -0x3d4d51cb;
        local_28 = lVar5;
        FUN_034c6294(&DAT_048b02b8,&local_28,uVar4 ^ uVar4 >> 0x10);
        uVar4 = *(uint *)(puVar10 + 0x10);
      }
      goto LAB_0341ea34;
    }
  }
  else if (uVar4 < 2) {
    if (*(char *)((long)puVar10 + 0x84) != '\0') goto LAB_0341e9f0;
LAB_0341ea34:
    if (uVar4 == 0) {
      (**(code **)*puVar10)(puVar10);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar10);
    }
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
LAB_0341ea64:
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x38) = *(int *)(lVar5 + 0x38) + -1;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (*(int *)(param_1 + 0x58) != 0) {
      plVar3 = *(long **)(param_1 + 0x50);
      do {
        plVar6 = plVar3 + 1;
        *(undefined1 *)(*plVar3 + 0x60) = 1;
        plVar3 = plVar6;
      } while (plVar6 != (long *)(*(long *)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x58) * 8))
      ;
    }
  }
  puVar2 = PTR_DAT_047e2fd0;
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 != 0) {
    if (*(uint *)(param_1 + 0x88) != 0) {
      lVar11 = (ulong)*(uint *)(param_1 + 0x88) * 0x48;
      plVar3 = (long *)(lVar5 + 0x38);
      do {
        if (*plVar3 != 0) {
          *(undefined4 *)(plVar3 + 1) = 0;
          (**(code **)(puVar2 + 0x30))(9);
          *plVar3 = 0;
          *(undefined4 *)((long)plVar3 + 0xc) = 0;
        }
        lVar11 = lVar11 + -0x48;
        plVar3 = plVar3 + 9;
      } while (lVar11 != 0);
      lVar5 = *(long *)(param_1 + 0x80);
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9,lVar5);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  lVar5 = *(long *)(param_1 + 0x68);
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x38) != 0) {
      *(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x40) = 0;
      lVar5 = *(long *)(param_1 + 0x68);
    }
    lVar5 = *(long *)(lVar5 + 0x70);
    if (lVar5 != 0) {
      if (*(undefined8 **)(lVar5 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(lVar5 + 0x20) = 0;
      }
      *(undefined8 *)(lVar5 + 0x20) = 0;
    }
  }
  plVar3 = *(long **)(param_1 + 0x50);
  uVar4 = *(uint *)(param_1 + 0x58);
  if (uVar4 != 0) {
    plVar6 = plVar3;
    do {
      lVar5 = *plVar6;
      uVar7 = *(uint *)(lVar5 + 0x58);
      if (uVar7 != 0) {
        lVar11 = (ulong)uVar7 << 3;
        plVar9 = *(long **)(lVar5 + 0x50);
LAB_0341eb7c:
        if (*plVar9 != param_1) goto code_r0x0341eb88;
        plVar3 = *(long **)(lVar5 + 0x50) + ((ulong)uVar7 - 1);
        if (plVar9 < plVar3) {
          do {
            plVar8 = plVar9 + 1;
            *plVar9 = *plVar8;
            plVar9 = plVar8;
          } while (plVar8 < plVar3);
          uVar7 = *(uint *)(lVar5 + 0x58);
        }
        *(uint *)(lVar5 + 0x58) = uVar7 - 1;
        *(undefined1 *)(lVar5 + 0x60) = 1;
        plVar3 = *(long **)(param_1 + 0x50);
        uVar4 = *(uint *)(param_1 + 0x58);
      }
LAB_0341ebd4:
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3 + uVar4);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = 1;
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if ((*(long *)(param_1 + 0x40) != 0) && (*(char *)(param_1 + 0x48) != '\0')) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
code_r0x0341eb88:
  plVar9 = plVar9 + 1;
  lVar11 = lVar11 + -8;
  if (lVar11 == 0) goto LAB_0341ebd4;
  goto LAB_0341eb7c;
}


