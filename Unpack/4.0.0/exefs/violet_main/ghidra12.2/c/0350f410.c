/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0350f410; name: FUN_0350f410
 */


long * FUN_0350f410(int param_1,ulong param_2,long param_3)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  undefined2 uVar5;
  int *piVar6;
  code *pcVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  
  if (param_1 != 0) {
    if (param_1 == 2) {
      plVar4 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0xd8);
      if (plVar4 == (long *)0x0) {
        return (long *)0x0;
      }
      plVar4[2] = 0;
      plVar4[3] = param_3;
      puVar2 = PTR_DAT_047e74a8;
      plVar4[10] = 0;
      plVar4[0xb] = 0;
      *(byte *)(plVar4 + 4) = *(byte *)(plVar4 + 4) & 0xf8;
      *(undefined4 *)((long)plVar4 + 0x44) = 0;
      *(undefined4 *)(plVar4 + 0x11) = 0;
      *(undefined4 *)(plVar4 + 0x10) = 0;
      plVar4[0xe] = 0;
      plVar4[0xf] = 0;
      *plVar4 = (long)(puVar2 + 0x10);
      plVar4[1] = 0;
      plVar4[7] = (long)(puVar2 + 0x338);
      plVar4[5] = (long)(puVar2 + 0x220);
      plVar4[6] = (long)(puVar2 + 0x2d0);
      *(undefined1 *)(plVar4 + 0x12) = 0xff;
      *(undefined1 *)(plVar4 + 0x13) = 0xff;
      plVar4[0x16] = 0;
      plVar4[0x17] = 0;
      plVar4[0x14] = 0;
      plVar4[0x15] = 0;
      plVar4[0xc] = (long)(PTR_DAT_047e74b0 + 0x10);
      plVar4[0xd] = 0;
      *(undefined4 *)(plVar4 + 0x18) = 0xffffffff;
      plVar4[0x19] = 0;
      plVar4[0x1a] = 0;
      return plVar4;
    }
    if ((param_2 & 0xffff0000) != 0) {
      if (((uint)(param_2 >> 0x10) & 0xffff) == 2) {
        plVar4 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0xa0);
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
        plVar4[2] = 0;
        plVar4[3] = param_3;
        puVar2 = PTR_DAT_047e6938 + 0x10;
        *(undefined8 *)((long)plVar4 + 0x24) = 0;
        *(undefined8 *)((long)plVar4 + 0x2c) = 0;
        *plVar4 = (long)puVar2;
        plVar4[1] = 0;
        *(byte *)(plVar4 + 4) = *(byte *)(plVar4 + 4) & 0xf8;
        *(undefined8 *)((long)plVar4 + 0x34) = 0;
        plVar4[9] = 0;
        *(undefined4 *)(plVar4 + 8) = 0;
        *(undefined4 *)(plVar4 + 10) = 0;
        if (param_3 == 0) {
          uVar5 = 1;
        }
        else {
          uVar5 = *(undefined2 *)(param_3 + 0x2b8);
        }
        *(undefined2 *)((long)plVar4 + 0x54) = uVar5;
        *(undefined2 *)(plVar4 + 0x10) = uVar5;
        plVar4[0xb] = 0;
        plVar4[0xc] = 0;
        plVar4[0xd] = 0;
        plVar4[0xe] = 0;
        *(byte *)((long)plVar4 + 0x82) = *(byte *)((long)plVar4 + 0x82) & 0x80;
        puVar2 = PTR_DAT_047e74b8 + 0x10;
        plVar4[0xf] = 0;
        *plVar4 = (long)puVar2;
        *(undefined4 *)(plVar4 + 0x13) = 0;
        plVar4[0x11] = 0;
        plVar4[0x12] = 0;
        return plVar4;
      }
      piVar6 = *(int **)PTR_DAT_047e6f78;
      uVar3 = *(uint *)(PTR_DAT_047e6f78 + 8);
      if ((uVar3 == 0) || (*piVar6 == (int)param_2)) {
        piVar9 = piVar6;
      }
      else {
        lVar8 = (ulong)uVar3 * 0x28;
        piVar10 = piVar6;
        do {
          lVar8 = lVar8 + -0x28;
          if (lVar8 == 0) {
            return (long *)0x0;
          }
          piVar9 = piVar10 + 10;
          piVar1 = piVar10 + 10;
          piVar10 = piVar9;
        } while (*piVar1 != (int)param_2);
      }
      if (piVar9 != piVar6 + (ulong)uVar3 * 10) {
        if (param_1 == 1) {
          pcVar7 = *(code **)(piVar9 + 2);
        }
        else {
          pcVar7 = *(code **)(piVar9 + 4);
        }
        plVar4 = (long *)(*pcVar7)(param_3);
        return plVar4;
      }
    }
  }
  return (long *)0x0;
}


