/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353a070; name: FUN_0353a070
 */


long FUN_0353a070(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_48;
  
  if (param_3 < 0x401) {
    uVar6 = param_3 + 0xf >> 4;
  }
  else {
    lVar4 = (long)(int)param_1;
    if (*(ulong *)(&DAT_048d2580 + (long)(int)param_1 * 0x638) < param_3) {
      uVar6 = (&DAT_048d2168)[lVar4 * 199];
      if (uVar6 * 0x20 - 0x80 < param_3) {
        FUN_0353b230(param_1,param_2,0);
        uVar12 = param_3 + 0x80 >> (*(ulong *)(&DAT_048d2158 + lVar4 * 0x638) & 0x3f);
        if ((*(long *)(&DAT_048d2150 + lVar4 * 0x638) - 1U & param_3 + 0x80) != 0) {
          uVar12 = uVar12 + 1;
        }
        uVar6 = (&DAT_048d2168)[lVar4 * 199];
        uVar11 = uVar12 * *(long *)(&DAT_048d2150 + lVar4 * 0x638);
        local_48 = 0;
        uVar9 = 0;
        if (uVar6 <= uVar11) {
          if (uVar6 <= *(ulong *)(&DAT_048d2160 + lVar4 * 0x638)) {
            uVar6 = 0;
          }
          uVar9 = uVar6;
        }
        lVar1 = uVar9 + uVar11;
        while (uVar11 = DAT_048d2d80, uVar6 = DAT_048d2d80 + lVar1,
              DAT_048d2d78 == 0 || uVar6 <= DAT_048d2d78) {
          while (DAT_048d2d80 == uVar11) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(0x48d2d80,0x10);
            if (bVar3) {
              cVar2 = ExclusiveMonitorsStatus();
              DAT_048d2d80 = uVar6;
            }
            if (cVar2 == '\0') {
              uVar6 = (**(code **)(&DAT_048d2108 + lVar4 * 0x638))(lVar1,&local_48);
              uVar7 = 0;
              if ((uVar9 != 0) && (uVar6 != 0)) {
                uVar9 = uVar9 - (uVar6 & (*(ulong *)(&DAT_048d2178 + lVar4 * 0x638) ^
                                         0xffffffffffffffff));
                uVar6 = uVar6 + uVar9;
                uVar7 = (undefined4)(uVar9 >> 3);
              }
              if (uVar6 == 0) {
                return 0;
              }
              *(undefined4 *)(uVar6 + 0xc) = 0xffffffff;
              *(int *)(uVar6 + 0x2c) = (int)uVar12;
              *(undefined4 *)(uVar6 + 0x3c) = uVar7;
              *(undefined8 *)(uVar6 + 0x58) = local_48;
              goto LAB_0353a294;
            }
          }
          ClearExclusiveLocal();
        }
      }
      else {
        uVar12 = param_3 + 0x80 >> (*(ulong *)(&DAT_048d2170 + lVar4 * 0x638) & 0x3f);
        if ((uVar6 - 1 & param_3 + 0x80) != 0) {
          uVar12 = uVar12 + 1;
        }
        uVar6 = FUN_0353c070(param_1,param_2,0,uVar12);
        if (uVar6 != 0) {
          *(undefined4 *)(uVar6 + 0xc) = 0x7e;
LAB_0353a294:
          *(long *)(uVar6 + 0x40) = param_2;
          uVar10 = 0;
          if (*(long *)(param_2 + 0x7e70) != 0) {
            *(ulong *)(*(long *)(param_2 + 0x7e70) + 0x50) = uVar6;
            uVar10 = *(undefined8 *)(param_2 + 0x7e70);
          }
          *(undefined8 *)(uVar6 + 0x48) = uVar10;
          *(long *)(param_2 + 0x1868) = *(long *)(param_2 + 0x1868) + 1;
          *(ulong *)(param_2 + 0x7e70) = uVar6;
          return uVar6 + 0x80;
        }
      }
      return 0;
    }
    uVar6 = (ulong)(ushort)(&DAT_048d2196)
                           [(ulong)((int)(param_3 + 0x1fffffffbff >> 9) + 0x41) * 4 + lVar4 * 0x31c]
    ;
  }
  plVar5 = (long *)(param_2 + uVar6 * 0x18 + 8);
  plVar8 = (long *)*plVar5;
  if (plVar8 == (long *)0x0) {
    lVar4 = FUN_0353bce0(param_1,param_2);
    return lVar4;
  }
  *plVar5 = *plVar8;
  return (long)plVar8;
}


