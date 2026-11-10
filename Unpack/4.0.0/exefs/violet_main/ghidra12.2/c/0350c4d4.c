/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0350c4d4; name: FUN_0350c4d4
 */


void FUN_0350c4d4(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x128);
  if (lVar10 != 0) {
    lVar7 = *(long *)(lVar10 + 0xb0);
    if (lVar7 != 0) {
      bVar2 = *(byte *)(lVar10 + 0xb8);
      *(undefined8 *)(lVar10 + 0xc4) = 0;
      if (bVar2 != 0) {
        if ((bVar2 < 9) && (*(uint *)PTR_DAT_047e6d08 == (uint)*(ushort *)(lVar10 + 0xc0))) {
          plVar1 = &DAT_048afcf8 + (bVar2 - 1);
          do {
            lVar8 = *plVar1;
            *(long *)(lVar7 + -0x20) = lVar8;
            while (*plVar1 == lVar8) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar7 + -0x20;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                *(undefined4 *)(lVar7 + -0x18) = 0;
                goto LAB_0350c588;
              }
            }
            ClearExclusiveLocal();
          } while( true );
        }
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,lVar7 + -0x20);
      }
LAB_0350c588:
      *(undefined8 *)(lVar10 + 0xb0) = 0;
      *(undefined2 *)(lVar10 + 0xc0) = 0;
    }
    *(undefined2 *)(lVar10 + 0x92) = 0;
    *(undefined8 *)(lVar10 + 0x94) = 0;
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    puVar5 = PTR_DAT_047e2fd0;
    if (*(char *)(lVar10 + 0x68) != '\0') {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,*(undefined8 *)(lVar10 + 0x30));
      (**(code **)(puVar5 + 0x30))(5,*(undefined8 *)(lVar10 + 0x60));
    }
    *(undefined8 *)(lVar10 + 0x38) = 0;
    puVar9 = *(undefined8 **)(param_1 + 0x128);
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar9);
    }
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  FUN_03509490(param_1 + 0x68);
  lVar10 = *(long *)(param_1 + 0x138);
  *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) & 0xfd;
  puVar5 = PTR_DAT_047e2fd0;
  if (lVar10 != 0) {
    iVar6 = *(int *)(param_1 + 0x140);
    if (0 < iVar6) {
      lVar8 = 0;
      lVar7 = 1;
      while( true ) {
        if (*(char *)(lVar10 + lVar8 + 0x18) != '\0') {
          (**(code **)(puVar5 + 0x30))(5,*(undefined8 *)(lVar10 + lVar8 + 8));
          *(undefined8 *)(*(long *)(param_1 + 0x138) + lVar8 + 8) = 0;
          iVar6 = *(int *)(param_1 + 0x140);
        }
        if (iVar6 <= lVar7) break;
        lVar10 = *(long *)(param_1 + 0x138);
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 0x20;
      }
      lVar10 = *(long *)(param_1 + 0x138);
    }
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,lVar10);
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  return;
}


