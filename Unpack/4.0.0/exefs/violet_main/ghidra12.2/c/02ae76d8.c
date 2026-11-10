/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ae76d8; name: FUN_02ae76d8
 */


void FUN_02ae76d8(byte param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_a8 [48];
  undefined8 local_78 [7];
  undefined8 local_28;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  puVar5 = PTR_DAT_047d4900;
  puVar4 = PTR_DAT_047d48f8;
  plVar10 = *(long **)(lVar8 + 0x1c0);
  do {
    lVar8 = *plVar10;
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x28))((undefined8 *)(lVar8 + 0x28));
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      uVar12 = FUN_01b3fb0c();
      *(undefined8 *)puVar5 = uVar12;
      __cxa_guard_release(puVar4);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)puVar5) {
        if (*(char *)(lVar8 + 0xd98) == -1) {
          pbVar9 = (byte *)(lVar8 + 0xd98);
        }
        else {
          pbVar9 = (byte *)(lVar8 + 0xdac);
          if (*(char *)(lVar8 + 0xdac) != -1) {
            *(undefined4 *)(lVar8 + 0xda8) = *(undefined4 *)(lVar8 + 0xdbc);
            *(undefined8 *)(lVar8 + 0xd98) = *(undefined8 *)pbVar9;
            *(undefined8 *)(lVar8 + 0xda0) = *(undefined8 *)(lVar8 + 0xdb4);
          }
        }
        pbVar9[0x10] = 0;
        pbVar9[0x11] = 0;
        pbVar9[0x12] = 0;
        pbVar9[0x13] = 0;
        pbVar9[9] = 0;
        pbVar9[10] = 0;
        pbVar9[0xb] = 0;
        pbVar9[0xc] = 0;
        pbVar9[0xd] = 0;
        pbVar9[0xe] = 0;
        pbVar9[0xf] = 0;
        pbVar9[0x10] = 0;
        pbVar9[1] = 0;
        pbVar9[2] = 0;
        pbVar9[3] = 0;
        pbVar9[4] = 0;
        pbVar9[5] = 0;
        pbVar9[6] = 0;
        pbVar9[7] = 0;
        pbVar9[8] = 0;
        *pbVar9 = param_1;
        FUN_01b3c408(0x120,(long)(char)param_1);
        local_78[0] = 0;
        nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)local_78);
        *(undefined8 *)(lVar8 + 0xdc0) = local_78[0];
        if (param_1 < 0x1e) {
          lVar11 = lVar8 + (ulong)param_1 * 0x70;
          bVar1 = *(byte *)(lVar11 + 0x78);
          memcpy(local_78,(void *)(lVar11 + 0x79),0x33);
          sVar2 = *(short *)(lVar11 + 0xac);
          uVar3 = *(undefined2 *)(lVar11 + 0xae);
          uVar12 = *(undefined8 *)(lVar11 + 0xb0);
          memcpy(auStack_a8,(void *)(lVar11 + 0xb8),0x30);
          if (sVar2 == 0) {
            local_28 = 0;
            nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_28);
            uVar12 = local_28;
          }
          if (bVar1 < 0x1e) {
            lVar8 = lVar8 + (ulong)bVar1 * 0x70;
            *(byte *)(lVar8 + 0x78) = bVar1;
            memcpy((void *)(lVar8 + 0x79),local_78,0x33);
            *(short *)(lVar8 + 0xac) = sVar2 + 1;
            *(undefined2 *)(lVar8 + 0xae) = uVar3;
            *(undefined8 *)(lVar8 + 0xb0) = uVar12;
            memcpy((void *)(lVar8 + 0xb8),auStack_a8,0x30);
          }
        }
        return;
      }
    }
    plVar10 = plVar10 + 1;
  } while( true );
}


