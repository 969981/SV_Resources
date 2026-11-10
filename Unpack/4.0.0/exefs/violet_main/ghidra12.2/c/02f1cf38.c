/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f1cf38; name: FUN_02f1cf38
 */


void FUN_02f1cf38(long *param_1,long param_2,long param_3)

{
  ulong *__s;
  char *__s_00;
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  size_t sVar5;
  void *__dest;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  undefined4 local_64;
  
  uVar1 = (int)((ulong)(param_3 - param_2) >> 4) * -0x33333333;
  if (uVar1 != 0) {
    uVar7 = 0;
    do {
      lVar11 = *param_1;
      iVar6 = (int)uVar7;
      lVar12 = (long)iVar6;
      lVar10 = (-(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2) + (long)iVar6;
      puVar9 = (ulong *)(param_2 + lVar10 * 0x10);
      __s = (ulong *)(lVar11 + lVar10 * 0x10);
      fVar13 = *(float *)(__s + 5);
      if (0.0 <= *(float *)(puVar9 + 5)) {
        if (0.0 <= fVar13) {
          FUN_02f1bf34(__s);
        }
        else {
          *__s = 0;
          __s[1] = 0;
          __s_00 = (char *)(*puVar9 & 0xfffffffffffffffe);
          if (__s_00 == (char *)0x0) {
            plVar4 = (long *)0x0;
          }
          else {
            sVar5 = strlen(__s_00);
            sVar5 = (size_t)((int)sVar5 + 1);
            __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar5)
            ;
            memcpy(__dest,__s_00,sVar5);
            plVar4 = (long *)__s[1];
            *__s = (ulong)__dest | 1;
          }
          puVar9 = (ulong *)(param_2 + lVar12 * 0x50 + 8);
          plVar8 = (long *)*puVar9;
          if (plVar4 != plVar8) {
            if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
              plVar8 = plVar8 + 2;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar3) {
                  *plVar8 = *plVar8 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              plVar4 = (long *)__s[1];
              plVar8 = (long *)*puVar9;
            }
            __s[1] = (ulong)plVar8;
            if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
              plVar8 = plVar4 + 2;
              do {
                lVar10 = *plVar8;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar3) {
                  *plVar8 = lVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar10 + -1 == 0) {
                (**(code **)(*plVar4 + 0x18))();
              }
            }
          }
          memcpy(__s + 2,(void *)(param_2 + lVar12 * 0x50 + 0x10),0x40);
        }
      }
      else {
        if (0.0 <= fVar13) {
          plVar4 = *(long **)(lVar11 + lVar12 * 0x50 + 8);
          if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
            plVar8 = plVar4 + 2;
            do {
              lVar10 = *plVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = lVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar10 + -1 == 0) {
              (**(code **)(*plVar4 + 0x18))();
            }
          }
          if ((*__s & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,*__s - 1,0);
          }
          lVar10 = lVar11 + lVar12 * 0x50;
          memset(__s,0,0x50);
          local_64 = 0;
          FUN_00cb06cc(lVar10 + 0x19,&local_64);
          *(undefined4 *)(lVar10 + 0x1a) = 0x3f003f00;
          *(undefined2 *)(lVar10 + 0x20) = 0x201;
          *(undefined4 *)(lVar10 + 0x2c) = 0x3f800000;
          *(undefined4 *)(lVar10 + 0x24) = 0x3d4ccccd;
          *(undefined2 *)(lVar10 + 0x32) = 0x3f80;
          *(undefined2 *)(lVar10 + 0x3a) = 0x40a0;
          *(undefined1 *)(lVar10 + 0x30) = 0;
          *(float *)(__s + 5) = -1.0;
        }
        *(undefined4 *)(lVar11 + lVar12 * 0x50 + 0x10) =
             *(undefined4 *)(param_2 + lVar12 * 0x50 + 0x10);
      }
      uVar7 = (ulong)(iVar6 + 1U);
    } while (iVar6 + 1U != uVar1);
  }
  return;
}


