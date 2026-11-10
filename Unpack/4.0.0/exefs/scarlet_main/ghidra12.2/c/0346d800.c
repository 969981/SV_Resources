/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346d800; name: FUN_0346d800
 */


void FUN_0346d800(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_18;
  
  if ((long *)param_1[0x2f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2f] + 0x18))();
    plVar5 = (long *)param_1[0x2f];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar5);
    }
    param_1[0x2f] = 0;
  }
  lVar3 = param_1[0x1e];
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 0x28) >> 1 & 1) != 0) {
      lVar4 = param_1[0x2e];
      do {
        lVar7 = *(long *)(lVar4 + 0x88);
        if (lVar7 != 0) {
          plVar5 = *(long **)(lVar7 + 0x40);
          if (plVar5 != (long *)0x0) {
            if (*(ushort *)(plVar5 + 2) - 1 == 0) {
              if (*plVar5 != 0) {
                *(undefined4 *)(plVar5 + 1) = 0;
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
                *plVar5 = 0;
                *(undefined4 *)((long)plVar5 + 0xc) = 0;
              }
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar5);
            }
            else {
              *(short *)(plVar5 + 2) = (short)(*(ushort *)(plVar5 + 2) - 1);
            }
          }
          *(undefined8 *)(lVar7 + 0x40) = 0;
          *(undefined4 *)(lVar7 + 0x38) = 0;
          lVar3 = param_1[0x1e];
          break;
        }
        lVar4 = *(long *)(lVar4 + 0x98);
      } while (lVar4 != 0);
    }
    FUN_034b2990(*(undefined8 *)PTR_DAT_047e7040,lVar3,param_1);
    param_1[0x1e] = 0;
    *(undefined4 *)(param_1 + 0x1f) = 0;
  }
  local_18 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  if (param_1[8] != 0) {
    FUN_034be534(&DAT_048b0298,param_1);
    FUN_034afae0(param_1[8],param_1,&local_18,uVar2 & 1);
    param_1[8] = 0;
  }
  puVar6 = (undefined8 *)param_1[2];
  iVar1 = *(int *)(puVar6 + 0x10);
  uVar2 = iVar1 - 1;
  *(uint *)(puVar6 + 0x10) = uVar2;
  if (iVar1 == 0 || uVar2 == 0) {
    if (uVar2 != 0) goto LAB_0346d9fc;
LAB_0346d98c:
    lVar3 = puVar6[5];
    if (lVar3 != 0) {
      uVar2 = ((uint)lVar3 ^ (uint)lVar3 >> 0x10) * -0x7a143595;
      uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
      local_18 = lVar3;
      FUN_034c6294(&DAT_048b02b8,&local_18,uVar2 ^ uVar2 >> 0x10);
      uVar2 = *(uint *)(puVar6 + 0x10);
    }
  }
  else {
    if (1 < uVar2) goto LAB_0346d9fc;
    if (*(char *)((long)puVar6 + 0x84) != '\0') goto LAB_0346d98c;
  }
  if (uVar2 == 0) {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar6);
  }
LAB_0346d9fc:
  FUN_0346da24(param_1);
  (**(code **)(*(long *)param_1[0x2e] + 0x30))();
  return;
}


