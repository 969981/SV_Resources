/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e5360; name: FUN_033e5360
 */


undefined8 FUN_033e5360(undefined8 *param_1,long param_2,uint param_3,int param_4,short param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  undefined2 uVar11;
  undefined1 uVar12;
  undefined2 uVar13;
  undefined1 uVar14;
  long *__src;
  long *plVar15;
  undefined1 uVar16;
  uint uVar17;
  
  plVar5 = (long *)(**(code **)(*(long *)*param_1 + 0x10))
                             ((long *)*param_1,0x80,
                              "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/AkRecorder/AkRecorderManager.cpp"
                              ,0x7b);
  if (plVar5 != (long *)0x0) {
    plVar5[5] = 0;
    plVar5[3] = 0;
    *(undefined4 *)(plVar5 + 4) = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    if (param_1[3] == 0) {
      param_1[3] = plVar5;
      *plVar5 = 0;
    }
    else {
      *plVar5 = param_1[3];
      param_1[3] = plVar5;
    }
    __src = plVar5 + 6;
    *__src = -0xb9b9b6ae;
    plVar5[1] = param_2;
    *(undefined4 *)((long)plVar5 + 0x74) = 0;
    *(short *)((long)plVar5 + 0x7a) = param_5;
    iVar7 = (param_3 & 0xff) * 2;
    *(undefined1 *)(plVar5 + 0xf) = 0;
    plVar5[7] = 0x20746d6645564157;
    uVar13 = (undefined2)(param_3 & 0xff);
    if (param_5 == 0) {
      *(undefined2 *)((long)plVar5 + 0x46) = uVar13;
      *(undefined4 *)(plVar5 + 8) = 0x28;
      *(undefined2 *)((long)plVar5 + 0x44) = 0xfffe;
      *(int *)(plVar5 + 9) = param_4;
      *(int *)((long)plVar5 + 0x4c) = iVar7 * param_4;
      bVar4 = (param_3 & 0xf00) != 0x200;
      *(short *)(plVar5 + 10) = (short)iVar7;
      *(undefined4 *)((long)plVar5 + 0x52) = 0x160010;
      *(uint *)(plVar5 + 0xb) = param_3 >> 0xc;
      *(undefined4 *)((long)plVar5 + 0x5c) = 1;
      uVar13 = 0x11d3;
      if (bVar4) {
        uVar13 = 0x10;
      }
      uVar17 = 0x44;
      uVar11 = 0x721;
      if (bVar4) {
        uVar11 = 0;
      }
      uVar9 = 0x86;
      if (bVar4) {
        uVar9 = 0x80;
      }
      *(undefined2 *)(plVar5 + 0xc) = uVar11;
      uVar16 = 0x44;
      if (bVar4) {
        uVar16 = 0;
      }
      uVar14 = 200;
      if (bVar4) {
        uVar14 = 0;
      }
      *(undefined2 *)((long)plVar5 + 0x62) = uVar13;
      *(undefined1 *)((long)plVar5 + 100) = uVar9;
      *(undefined1 *)((long)plVar5 + 0x65) = uVar16;
      *(undefined1 *)((long)plVar5 + 0x66) = uVar14;
      uVar9 = 0xc1;
      if (bVar4) {
        uVar9 = 0xaa;
      }
      uVar16 = 0xca;
      if (bVar4) {
        uVar16 = 0;
      }
      *(undefined2 *)((long)plVar5 + 0x56) = 0;
      uVar14 = 0;
      if (bVar4) {
        uVar14 = 0x38;
      }
      uVar12 = 0;
      if (bVar4) {
        uVar12 = 0x9b;
      }
      *(undefined1 *)((long)plVar5 + 0x67) = uVar9;
      uVar9 = 0;
      if (bVar4) {
        uVar9 = 0x71;
      }
      *(undefined1 *)(plVar5 + 0xd) = uVar16;
      *(undefined1 *)((long)plVar5 + 0x69) = uVar14;
      *(undefined1 *)((long)plVar5 + 0x6a) = uVar12;
      lVar8 = 0x70;
      lVar10 = 0x6c;
      *(undefined1 *)((long)plVar5 + 0x6b) = uVar9;
    }
    else {
      *(undefined4 *)(plVar5 + 8) = 0x18;
      *(undefined2 *)((long)plVar5 + 0x46) = uVar13;
      *(short *)(plVar5 + 10) = (short)iVar7;
      *(undefined2 *)((long)plVar5 + 0x44) = 0xfffe;
      lVar10 = 0x5c;
      *(undefined4 *)((long)plVar5 + 0x52) = 0x10;
      lVar8 = 0x60;
      *(undefined2 *)((long)plVar5 + 0x56) = 0;
      *(int *)(plVar5 + 9) = param_4;
      *(int *)((long)plVar5 + 0x4c) = iVar7 * param_4;
      uVar17 = 0x34;
      *(uint *)(plVar5 + 0xb) = param_3;
    }
    *(undefined4 *)((long)plVar5 + lVar10) = 0x61746164;
    *(undefined4 *)((long)plVar5 + 0x34) = 0xffffffff;
    *(undefined4 *)((long)plVar5 + lVar8) = 0xffffffff;
    plVar15 = (long *)param_1[3];
    if (plVar15 == (long *)0x0) {
LAB_033e556c:
      if (plVar15 != (long *)0x0) {
        uVar3 = *(uint *)(plVar15 + 4);
        do {
          if (uVar3 == 0) {
            uVar6 = FUN_033e51fc(plVar15);
            if ((uVar6 & 1) == 0) {
              return 0;
            }
            uVar3 = *(uint *)(plVar15 + 4);
          }
          uVar2 = 0x20000 - uVar3;
          if (uVar17 <= 0x20000 - uVar3) {
            uVar2 = uVar17;
          }
          memcpy((void *)(*(long *)(plVar15[2] + (ulong)*(uint *)(plVar15 + 3) * 8 + -8) +
                         (ulong)uVar3),__src,(ulong)uVar2);
          if (*(short *)((long)plVar15 + 0x7a) == 0) {
            iVar7 = (int)plVar15[0xe] + uVar2;
            *(int *)(plVar15 + 0xe) = iVar7;
            iVar7 = iVar7 + 0x3c;
          }
          else {
            iVar7 = (int)plVar15[0xc] + uVar2;
            *(int *)(plVar15 + 0xc) = iVar7;
            iVar7 = iVar7 + 0x2c;
          }
          *(int *)((long)plVar15 + 0x34) = iVar7;
          uVar1 = (int)plVar15[4] + uVar2;
          uVar3 = 0;
          if (uVar1 != 0x20000) {
            uVar3 = uVar1;
          }
          uVar17 = uVar17 - uVar2;
          __src = (long *)((long)__src + (ulong)uVar2);
          *(uint *)(plVar15 + 4) = uVar3;
        } while (uVar17 != 0);
        *(undefined4 *)((long)plVar5 + 0x34) = 0;
        if (*(short *)((long)plVar5 + 0x7a) == 0) {
          *(undefined4 *)(plVar5 + 0xe) = 0;
        }
        else {
          *(undefined4 *)(plVar5 + 0xc) = 0;
        }
        return 1;
      }
    }
    else {
      do {
        if (plVar15[1] == param_2) goto LAB_033e556c;
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  return 0;
}


