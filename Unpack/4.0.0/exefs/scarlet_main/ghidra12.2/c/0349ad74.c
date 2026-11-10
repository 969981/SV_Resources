/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0349ad74; name: FUN_0349ad74
 */


undefined8 FUN_0349ad74(long param_1,undefined1 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_50;
  long lStack_48;
  undefined8 *local_40;
  long local_38;
  
  *param_2 = 0;
  uVar5 = *(uint *)(param_1 + 100) >> 8 & 0xf;
  if ((3 < uVar5) || (((*(uint *)(param_1 + 100) & 0xff) == 0 && (uVar5 != 3)))) goto LAB_0349adc8;
  if ((*(char *)(param_1 + 0x46c) != '\0') && (*(long *)(param_1 + 0x460) == 0)) {
    lVar9 = *(long *)(param_1 + 0x28);
    if (*(uint *)(PTR_DAT_047e7188 + 8) != 0) {
      plVar6 = *(long **)PTR_DAT_047e7188;
      lVar7 = (ulong)*(uint *)(PTR_DAT_047e7188 + 8) << 3;
      do {
        lVar8 = *plVar6;
        if ((((*(long *)(lVar8 + 0x60) == 0) && (*(long *)(lVar8 + 0x68) == lVar9)) &&
            (*(long *)(lVar8 + 0x70) == 0)) &&
           ((*(long *)(lVar8 + 8) == 0 ||
            (*(char *)(*(long *)(*(long *)(lVar8 + 8) + 0x10) + 0x84) != '\0')))) {
          *(long *)(param_1 + 0x460) = lVar8;
          goto LAB_0349adc0;
        }
        plVar6 = plVar6 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
    }
    *(undefined8 *)(param_1 + 0x460) = 0;
    *param_2 = 1;
    puVar2 = PTR_DAT_047e2fd0;
    lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x1a8);
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0x460) = 0;
      return 0;
    }
    FUN_03504b98();
    *(undefined4 *)(lVar7 + 0x1a0) = 0x7fffffff;
    *(byte *)(lVar7 + 0x1a4) = *(byte *)(lVar7 + 0x1a4) & 0xf8;
    *(long *)(param_1 + 0x460) = lVar7;
    local_50 = 0;
    local_40 = (undefined8 *)0x0;
    lStack_48 = lVar9;
    iVar4 = FUN_034efcb0(lVar7,&local_50,0);
    puVar3 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      iVar1 = *(int *)(local_40 + 0x10);
      uVar5 = iVar1 - 1;
      *(uint *)(local_40 + 0x10) = uVar5;
      if (iVar1 == 0 || uVar5 == 0) {
        if (uVar5 == 0) {
LAB_0349aed8:
          lVar9 = local_40[5];
          if (lVar9 != 0) {
            uVar5 = ((uint)lVar9 ^ (uint)lVar9 >> 0x10) * -0x7a143595;
            uVar5 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51cb;
            local_38 = lVar9;
            FUN_034c6294(&DAT_048b02b8,&local_38,uVar5 ^ uVar5 >> 0x10);
            uVar5 = *(uint *)(puVar3 + 0x10);
          }
          goto LAB_0349af1c;
        }
      }
      else if (uVar5 < 2) {
        if (*(char *)((long)local_40 + 0x84) != '\0') goto LAB_0349aed8;
LAB_0349af1c:
        if (uVar5 == 0) {
          (**(code **)*puVar3)(puVar3);
          (**(code **)(puVar2 + 0x30))(4,puVar3);
        }
      }
      local_40 = (undefined8 *)0x0;
    }
    if (iVar4 != 1) {
      lVar9 = *(long *)(param_1 + 0x460);
      if (lVar9 != 0) {
        if (*(long *)(lVar9 + 0x28) == 0) {
          if (*(long *)(lVar9 + 0x60) == 0) {
            if (*(long *)(lVar9 + 0x68) != -1) goto LAB_0349afa4;
          }
          else if (*(long *)(*(long *)(lVar9 + 0x60) + 0xa0) == 0) {
LAB_0349afa4:
            lVar7 = FUN_0349fff0(lVar9 + 0x60);
            if ((lVar7 != 0) &&
               ((*(long *)(lVar7 + 0x460) == lVar9 || (*(long *)(lVar7 + 0x460) == 0)))) {
              *(undefined1 *)(lVar7 + 0x46c) = 0;
              *(undefined8 *)(lVar7 + 0x460) = 0;
            }
          }
        }
        FUN_03504ca4(lVar9);
        (**(code **)(puVar2 + 0x30))(5,lVar9);
      }
      *(undefined8 *)(param_1 + 0x460) = 0;
    }
  }
LAB_0349adc0:
  *(undefined1 *)(param_1 + 0x46c) = 1;
LAB_0349adc8:
  return *(undefined8 *)(param_1 + 0x460);
}


