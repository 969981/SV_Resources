/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cbd24; name: FUN_007cbd24
 */


void FUN_007cbd24(long *param_1)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  void *__s;
  long lVar9;
  void *__src;
  size_t __n;
  uint uVar10;
  int local_60 [4];
  
  lVar4 = FUN_007ec554();
  if ((lVar4 != 0) && (param_1[0xd] != 0)) {
    local_60[0] = (**(code **)(*param_1 + 0x18))(param_1);
    plVar5 = (long *)FUN_007e9698(lVar4,local_60);
    uVar6 = (**(code **)(*(long *)*plVar5 + 0x78))();
    while ((uVar6 & 1) == 0) {
      lVar9 = param_1[0xd];
      iVar2 = *(int *)(lVar9 + 0x28);
      if (iVar2 == 0) {
        if (*(int *)(lVar9 + 0x10) == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          if (*(long *)(lVar9 + 8) != 0) {
            lVar8 = *(long *)(lVar9 + 8) + 0x10;
          }
        }
        FUN_0078fa2c(lVar9,lVar8 + -0x10);
        FUN_0078fa04(lVar9 + 0x18,lVar9 + 0x18,lVar8 + -0x10 + (long)*(int *)(lVar9 + 0x2c));
        lVar9 = param_1[0xd];
        iVar2 = *(int *)(lVar9 + 0x28);
      }
      plVar1 = (long *)0x0;
      if (*(long *)(*plVar5 + 0x50) != 0) {
        plVar1 = (long *)(*plVar5 + 0x50);
      }
      if (iVar2 == 0) {
        __s = (void *)0x0;
        if ((*(byte *)((long)plVar1 + 0x29) >> 5 & 1) == 0) goto LAB_007cbdc4;
LAB_007cbf08:
        bVar3 = *(byte *)(plVar1 + 5);
        uVar10 = 1;
        if ((bVar3 & 1) != 0) {
          uVar10 = 2;
        }
        if ((bVar3 & 2) != 0) {
          uVar10 = uVar10 + 2;
        }
        if ((bVar3 & 4) != 0) {
          uVar10 = uVar10 + 4;
        }
        if ((bVar3 & 8) != 0) {
          uVar10 = uVar10 + 8;
        }
        FUN_007e9984(local_60,lVar4,*plVar1 + (ulong)uVar10,*(undefined2 *)((long)plVar1 + 0x2a));
        if (local_60[0] != 0) {
          return;
        }
        __src = *(void **)(lVar4 + 0x28);
        __n = (size_t)*(uint *)(lVar4 + 0x30);
      }
      else {
        lVar8 = FUN_0078fac8(lVar9 + 0x18);
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = lVar8 - *(int *)(lVar9 + 0x2c);
        }
        __s = (void *)(lVar8 + 0x10);
        memset(__s,0,0x5b0);
        FUN_0078f9e0(lVar9,lVar9,lVar8);
        if ((*(byte *)((long)plVar1 + 0x29) >> 5 & 1) != 0) goto LAB_007cbf08;
LAB_007cbdc4:
        bVar3 = *(byte *)(plVar1 + 5);
        uVar10 = 1;
        if ((bVar3 & 1) != 0) {
          uVar10 = 2;
        }
        if ((bVar3 & 2) != 0) {
          uVar10 = uVar10 + 2;
        }
        if ((bVar3 & 4) != 0) {
          uVar10 = uVar10 + 4;
        }
        __n = (size_t)*(ushort *)((long)plVar1 + 0x2a);
        if ((bVar3 & 8) != 0) {
          uVar10 = uVar10 + 8;
        }
        __src = (void *)(*plVar1 + (ulong)uVar10);
      }
      uVar7 = FUN_007ed654(plVar1);
      *(undefined8 *)((long)__s + 0x5a8) = uVar7;
      *(int *)((long)__s + 0x5a4) = (int)__n;
      memcpy(__s,__src,__n);
      (**(code **)(*(long *)*plVar5 + 0x80))();
      uVar6 = (**(code **)(*(long *)*plVar5 + 0x78))();
    }
    FUN_00797e54(param_1 + 2,*(undefined4 *)(param_1[0xd] + 0x10));
  }
  return;
}


