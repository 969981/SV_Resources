/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346dff0; name: FUN_0346dff0
 */


undefined4 FUN_0346dff0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  long **__s;
  uint uVar10;
  ulong uVar11;
  long *local_80 [2];
  long **local_70;
  undefined4 local_68;
  
  local_80[0] = (long *)0x0;
  FUN_034ad330(*(undefined8 *)(param_1 + 0x170),local_80);
  uVar6 = FUN_034ac84c(*(undefined8 *)(param_1 + 0x170));
  uVar5 = (uint)uVar6;
  if ((uVar5 == 0) && (local_80[0] == (long *)0x0)) {
    return 1;
  }
  uVar10 = uVar5;
  if (local_80[0] != (long *)0x0) {
    uVar10 = uVar5 + 1;
  }
  if (uVar10 != 0) {
    lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)uVar10 * 0x60);
    *(long *)(param_1 + 0x188) = lVar7;
    if (lVar7 == 0) {
LAB_0346e2a0:
      uVar9 = 2;
      goto LAB_0346e2a4;
    }
    *(uint *)(param_1 + 0x194) = uVar10;
  }
  if (local_80[0] == (long *)0x0) {
    if (uVar5 == 0) {
      return 1;
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 400);
    uVar10 = *(uint *)(param_1 + 0x194);
    if (uVar3 < uVar10) {
LAB_0346e0cc:
      if (uVar3 < uVar10) {
        uVar10 = *(uint *)(param_1 + 400);
        lVar7 = *(long *)(param_1 + 0x188);
        *(uint *)(param_1 + 400) = uVar10 + 1;
        plVar8 = (long *)(lVar7 + (ulong)uVar10 * 0x60);
        if (lVar7 != 0) {
          *plVar8 = (long)(PTR_DAT_047e7170 + 0x10);
          lVar7 = lVar7 + (ulong)uVar10 * 0x60;
          *(undefined4 *)(lVar7 + 0x28) = 0;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          *(undefined8 *)(lVar7 + 8) = 0;
          *(undefined8 *)(lVar7 + 0x10) = 0;
          *(undefined4 *)(lVar7 + 0x20) = 0;
          *(undefined1 *)(lVar7 + 0x30) = 0xff;
          *(undefined1 *)(lVar7 + 0x38) = 0xff;
          *(undefined8 *)(lVar7 + 0x40) = 0;
          *(undefined8 *)(lVar7 + 0x48) = 0;
          *(undefined8 *)(lVar7 + 0x50) = 0;
          *(undefined8 *)(lVar7 + 0x58) = 0;
        }
      }
      else {
        plVar8 = (long *)0x0;
      }
    }
    else {
      iVar2 = uVar10 + (uVar10 >> 1);
      if (uVar10 == 0) {
        iVar2 = 1;
      }
      uVar10 = iVar2 + uVar10;
      lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                        (0,*(undefined8 *)(param_1 + 0x188),(ulong)uVar10 * 0x60);
      plVar8 = (long *)0x0;
      if (lVar7 != 0) {
        *(long *)(param_1 + 0x188) = lVar7;
        *(uint *)(param_1 + 0x194) = uVar10;
        goto LAB_0346e0cc;
      }
    }
    lVar7 = FUN_0347ff40(plVar8,local_80[0],param_1,param_1 + 0x10,0,1);
    uVar9 = 1;
    if (lVar7 == 0) {
      uVar9 = 2;
      goto LAB_0346e2a4;
    }
    if (uVar5 == 0) goto LAB_0346e2a4;
  }
  __s = local_80 + (uVar6 & 0xffffffff) * -2;
  uVar11 = uVar6 & 0xffffffff;
  memset(__s,0,(uVar6 & 0xfffffff) << 4);
  local_68 = 0;
  local_70 = __s;
  FUN_034aca6c(*(undefined8 *)(param_1 + 0x170),local_80 + 2);
  puVar4 = PTR_DAT_047e2fd0;
  if (uVar5 != 0) {
    puVar1 = PTR_DAT_047e7170 + 0x10;
    do {
      if (*__s != (long *)0x0) {
        uVar10 = *(uint *)(param_1 + 400);
        uVar5 = *(uint *)(param_1 + 0x194);
        if (uVar10 < uVar5) {
LAB_0346e208:
          if (uVar10 < uVar5) {
            lVar7 = *(long *)(param_1 + 0x188);
            uVar5 = *(uint *)(param_1 + 400);
            plVar8 = (long *)(lVar7 + (ulong)uVar5 * 0x60);
            *(uint *)(param_1 + 400) = uVar5 + 1;
            if (lVar7 != 0) {
              lVar7 = lVar7 + (ulong)uVar5 * 0x60;
              *plVar8 = (long)puVar1;
              *(undefined4 *)(lVar7 + 0x28) = 0;
              *(undefined8 *)(lVar7 + 8) = 0;
              *(undefined8 *)(lVar7 + 0x10) = 0;
              *(undefined8 *)(lVar7 + 0x18) = 0;
              *(undefined4 *)(lVar7 + 0x20) = 0;
              *(undefined1 *)(lVar7 + 0x30) = 0xff;
              *(undefined1 *)(lVar7 + 0x38) = 0xff;
              *(undefined8 *)(lVar7 + 0x40) = 0;
              *(undefined8 *)(lVar7 + 0x48) = 0;
              *(undefined8 *)(lVar7 + 0x50) = 0;
              *(undefined8 *)(lVar7 + 0x58) = 0;
            }
          }
          else {
            plVar8 = (long *)0x0;
          }
        }
        else {
          iVar2 = uVar5 + (uVar5 >> 1);
          if (uVar5 == 0) {
            iVar2 = 1;
          }
          uVar5 = iVar2 + uVar5;
          lVar7 = (**(code **)(puVar4 + 0x20))
                            (0,*(undefined8 *)(param_1 + 0x188),(ulong)uVar5 * 0x60);
          plVar8 = (long *)0x0;
          if (lVar7 != 0) {
            *(long *)(param_1 + 0x188) = lVar7;
            *(uint *)(param_1 + 0x194) = uVar5;
            goto LAB_0346e208;
          }
        }
        lVar7 = FUN_0347ff40(plVar8,*__s,param_1,param_1 + 0x10,0,1);
        if (lVar7 == 0) goto LAB_0346e2a0;
        if (*__s != (long *)0x0) {
          (**(code **)(**__s + 0x18))();
          *__s = (long *)0x0;
        }
      }
      uVar11 = uVar11 - 1;
      __s = __s + 2;
    } while (uVar11 != 0);
  }
  uVar9 = 1;
LAB_0346e2a4:
  if (local_80[0] != (long *)0x0) {
    (**(code **)(*local_80[0] + 0x18))();
  }
  return uVar9;
}


