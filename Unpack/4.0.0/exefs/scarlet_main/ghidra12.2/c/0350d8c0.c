/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350d8c0; name: FUN_0350d8c0
 */


void FUN_0350d8c0(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xc4) = 0;
  if (lVar5 != 0) {
    bVar2 = *(byte *)(param_1 + 0xb8);
    if (bVar2 != 0) {
      if ((bVar2 < 9) && (*(uint *)PTR_DAT_047e6d08 == (uint)*(ushort *)(param_1 + 0xc0))) {
        plVar1 = &DAT_048afcf8 + (bVar2 - 1);
        do {
          lVar6 = *plVar1;
          *(long *)(lVar5 + -0x20) = lVar6;
          while (*plVar1 == lVar6) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar5 + -0x20;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              *(undefined4 *)(lVar5 + -0x18) = 0;
              goto LAB_0350d964;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,lVar5 + -0x20);
    }
LAB_0350d964:
    *(undefined8 *)(param_1 + 0xbc) = 0x2b;
    *(undefined8 *)(param_1 + 0xcc) = 0x3f800000ffffffff;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0xd4) = 0x1ffffffff;
  }
  return;
}


