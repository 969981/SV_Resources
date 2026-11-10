/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d8e2c; name: FUN_001d8e2c
 */


undefined4 FUN_001d8e2c(undefined8 param_1,long param_2,long *param_3)

{
  size_t __n;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long local_70;
  long lStack_68;
  
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 == 0) {
    if (*(char *)(param_2 + 0xc) != '\x04') {
      return 0;
    }
    lVar4 = param_3[0xbd];
    uVar3 = FUN_001f3884(param_1,3);
    *(undefined4 *)(param_3 + 0xbd) = uVar3;
    iVar2 = FUN_001f3884(param_1,2);
    *(bool *)((long)param_3 + 0x5ec) = iVar2 != 0;
    if ((int)lVar4 == (int)param_3[0xbd]) {
      return 0;
    }
    FUN_001db818(*param_3,"Connection state changed (MAX_CONCURRENT_STREAMS == %u)!\n");
    *(undefined1 *)(*(long *)(*param_3 + 0xd8) + 0xf0) = 1;
    return 0;
  }
  lVar4 = FUN_001f3774(param_1,iVar2);
  if (lVar4 == 0) {
    return 0;
  }
  lVar8 = *(long *)(lVar4 + 0x1e8);
  if (lVar8 == 0) {
    return 0xfffffc7a;
  }
  cVar1 = *(char *)(param_2 + 0xc);
  if (cVar1 != '\x05') {
    if (cVar1 == '\x01') {
      if (*(char *)(lVar8 + 0x21c) != '\0') {
        return 0;
      }
      if (*(int *)(lVar8 + 0x238) != -1) {
        if (99 < *(int *)(lVar8 + 0x238) - 100U) {
          *(undefined1 *)(lVar8 + 0x21c) = 1;
          *(undefined4 *)(lVar8 + 0x238) = 0xffffffff;
        }
        iVar2 = FUN_001d4af0(lVar8 + 0x220,&DAT_03bdfd30,2);
        if (iVar2 == 0) {
          uVar7 = (*(long **)(lVar8 + 0x220))[2] - *(long *)(lVar8 + 0x228);
          __n = *(ulong *)(lVar8 + 0x260);
          if (uVar7 <= *(ulong *)(lVar8 + 0x260)) {
            __n = uVar7;
          }
          memcpy((void *)(*(long *)(lVar8 + 600) + *(long *)(lVar8 + 0x268)),
                 (void *)(**(long **)(lVar8 + 0x220) + *(long *)(lVar8 + 0x228)),__n);
          *(size_t *)(lVar8 + 0x228) = *(long *)(lVar8 + 0x228) + __n;
          *(size_t *)(lVar8 + 0x260) = *(long *)(lVar8 + 0x260) - __n;
          *(size_t *)(lVar8 + 0x268) = *(long *)(lVar8 + 0x268) + __n;
          *(long *)(lVar4 + 0x1520) = *(long *)(lVar4 + 0x1520) + 1;
          param_3[0xbc] = param_3[0xbc] + 1;
          if (*param_3 == lVar4) {
            return 0;
          }
          FUN_001cea34(lVar4,0,6);
          return 0;
        }
      }
      return 0xfffffc7a;
    }
    if (cVar1 != '\0') {
      return 0;
    }
    if (*(char *)(lVar8 + 0x21c) != '\0') {
      return 0;
    }
    FUN_001fa1f0(param_1,0,iVar2,1);
    iVar2 = FUN_001eda84();
    if (iVar2 == 0) {
      return 0;
    }
    return 0xfffffc7a;
  }
  if (*(long *)(*(long *)(lVar4 + 0xd8) + 0x70) != 0) {
    lVar8 = FUN_001c3b98(lVar4);
    if (lVar8 != 0) {
      lVar5 = FUN_001ec338(1,0x2a0);
      if (lVar5 != 0) {
        *(long *)(lVar8 + 0x1e8) = lVar5;
        lVar6 = FUN_001d4724();
        *(long *)(lVar5 + 0x220) = lVar6;
        if (lVar6 != 0) {
          lVar5 = *(long *)(lVar8 + 0x1e8);
          *(undefined8 *)(lVar5 + 0x228) = 0;
          *(undefined1 *)(lVar5 + 0x21c) = 0;
          *(undefined4 *)(lVar5 + 0x238) = 0xffffffff;
          *(undefined8 *)(lVar5 + 0x240) = 0;
          *(undefined8 *)(lVar5 + 0x248) = 0;
          *(undefined2 *)(lVar5 + 0x250) = 0;
          *(undefined8 *)(lVar5 + 600) = *(undefined8 *)(lVar8 + 0x1130);
          *(undefined8 *)(lVar5 + 0x260) = *(undefined8 *)(lVar8 + 0xc10);
          *(undefined8 *)(lVar5 + 0x268) = 0;
          *(undefined4 *)(lVar8 + 0x1540) = *(undefined4 *)(lVar4 + 0x1540);
          lVar5 = *(long *)(lVar4 + 0x1e8);
          local_70 = lVar4;
          lStack_68 = param_2;
          if (lVar5 == 0) {
            FUN_001db9c8(lVar4,"Internal NULL stream!\n");
          }
          else {
            FUN_001d14e0(lVar4,1);
            iVar2 = (**(code **)(*(long *)(lVar4 + 0xd8) + 0x70))
                              (lVar4,lVar8,*(undefined8 *)(lVar5 + 0x290),&local_70,
                               *(undefined8 *)(*(long *)(lVar4 + 0xd8) + 0x78));
            FUN_001d14e0(lVar4,0);
            lVar6 = *(long *)(lVar5 + 0x288);
            if (*(long *)(lVar5 + 0x290) != 0) {
              uVar7 = 0;
              do {
                FUN_001ec308(*(undefined8 *)(lVar6 + uVar7 * 8));
                uVar7 = uVar7 + 1;
                lVar6 = *(long *)(lVar5 + 0x288);
              } while (uVar7 < *(ulong *)(lVar5 + 0x290));
            }
            FUN_001ec308();
            *(undefined8 *)(lVar5 + 0x288) = 0;
            *(undefined8 *)(lVar5 + 0x290) = 0;
            lVar5 = *(long *)(lVar8 + 0x1e8);
            if (iVar2 == 0) {
              *(undefined4 *)(lVar5 + 0x218) = *(undefined4 *)(param_2 + 0x28);
              *(undefined8 *)(lVar8 + 0xf0) = 0xffffffffffffffff;
              *(undefined8 *)(lVar8 + 0xf8) = 0xffffffffffffffff;
              iVar2 = FUN_001cfa28(*(undefined8 *)(lVar4 + 0xd8),lVar8,param_3);
              if (iVar2 == 0) {
                iVar2 = FUN_001f3790(param_3[0xaa],*(undefined4 *)(param_2 + 0x28),lVar8);
                if (iVar2 == 0) {
                  return 0;
                }
                FUN_001db818(lVar4,"failed to set user_data for stream %d\n",
                             *(undefined4 *)(param_2 + 0x28));
                goto LAB_001d918c;
              }
              FUN_001db818(lVar4,"failed to add handle to multi\n");
              lVar5 = *(long *)(lVar8 + 0x1e8);
            }
            FUN_001d97c8(lVar5);
            *(undefined8 *)(lVar8 + 0x1e8) = 0;
          }
          FUN_001e4720(lVar8);
          goto LAB_001d918c;
        }
        FUN_001ec308(lVar5);
      }
      FUN_001e4720(lVar8);
    }
    FUN_001db818(lVar4,"failed to duplicate handle\n");
  }
LAB_001d918c:
  uVar3 = FUN_001fa1f0(param_1,0,*(undefined4 *)(param_2 + 0x28),8);
  iVar2 = FUN_001eda84();
  if (iVar2 == 0) {
    return 0;
  }
  return uVar3;
}


