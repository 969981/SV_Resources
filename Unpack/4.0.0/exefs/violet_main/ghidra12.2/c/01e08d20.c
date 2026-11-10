/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e08d20; name: FUN_01e08d20
 */


undefined8 FUN_01e08d20(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  
  lVar2 = *(long *)(param_1 + 200);
  if (((lVar2 != 0) && (*(undefined8 **)(lVar2 + 0x28) != *(undefined8 **)(lVar2 + 0x20))) &&
     (plVar3 = (long *)**(undefined8 **)(lVar2 + 0x20), plVar3 != (long *)0x0)) {
    for (plVar1 = (long *)*plVar3; plVar1 != (long *)plVar3[1]; plVar1 = plVar1 + 1) {
      lVar2 = *plVar1;
      plVar5 = (long *)PTR_DAT_047d8b70;
      if (*(long *)(lVar2 + 8) != 0) {
        plVar5 = (long *)(*(long *)(lVar2 + 8) + 0x30);
      }
      if (((*plVar5 == -0x4186e5a5462dab1a) && (*(char *)(lVar2 + 0x10) == '\n')) &&
         (plVar5 = *(long **)(lVar2 + 0x18), plVar5 != (long *)0x0)) {
        plVar3 = (long *)PTR_DAT_047d8b70;
        if (*(long *)(*plVar5 + 8) != 0) {
          plVar3 = (long *)(*(long *)(*plVar5 + 8) + 0x30);
        }
        lVar2 = *plVar3;
        if (lVar2 == 0x201eeae5da2882b8) {
          plVar3 = *(long **)plVar5[1];
          plVar1 = (long *)((long *)plVar5[1])[1];
          if (plVar3 == plVar1) {
            return 0;
          }
          iVar4 = 0;
          do {
            lVar2 = *(long *)(*plVar3 + 8);
            plVar5 = (long *)PTR_DAT_047d8b70;
            if (lVar2 != 0) {
              plVar5 = (long *)(lVar2 + 0x30);
            }
            if ((*plVar5 == -0x7f4281032c8d64ed) && (*(char *)(*plVar3 + 0x10) == '\x02')) {
              iVar4 = iVar4 + 1;
            }
            plVar3 = plVar3 + 1;
          } while (plVar1 != plVar3);
          if (iVar4 == 1) {
            return 2;
          }
          return 0;
        }
        if (lVar2 == -0x23c42d452a27f831) {
          plVar3 = *(long **)plVar5[1];
          plVar1 = (long *)((long *)plVar5[1])[1];
          if (plVar3 == plVar1) {
            return 0;
          }
          iVar4 = 0;
          do {
            lVar2 = *(long *)(*plVar3 + 8);
            plVar5 = (long *)PTR_DAT_047d8b70;
            if (lVar2 != 0) {
              plVar5 = (long *)(lVar2 + 0x30);
            }
            if ((*plVar5 == -0x7f4281032c8d64ed || *plVar5 == -0x131e25fd51f7b7be) &&
               (*(char *)(*plVar3 + 0x10) == '\x02')) {
              iVar4 = iVar4 + 1;
            }
            plVar3 = plVar3 + 1;
          } while (plVar1 != plVar3);
          if (iVar4 == 2) {
            return 3;
          }
          return 0;
        }
        if (lVar2 != -0x2f5411d9702c32ce) {
          return 0;
        }
        plVar3 = *(long **)plVar5[1];
        plVar1 = (long *)((long *)plVar5[1])[1];
        if (plVar3 == plVar1) {
          return 0;
        }
        iVar4 = 0;
        do {
          lVar2 = *(long *)(*plVar3 + 8);
          plVar5 = (long *)PTR_DAT_047d8b70;
          if (lVar2 != 0) {
            plVar5 = (long *)(lVar2 + 0x30);
          }
          if ((*plVar5 == -0x9bd0700d03f5441 || *plVar5 == -0x36e586123abca11) &&
             (*(char *)(*plVar3 + 0x10) == '\x05')) {
            iVar4 = iVar4 + 1;
          }
          plVar3 = plVar3 + 1;
        } while (plVar1 != plVar3);
        if (iVar4 == 2) {
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}


