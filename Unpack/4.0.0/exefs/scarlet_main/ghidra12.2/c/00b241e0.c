/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b241e0; name: FUN_00b241e0
 */


void FUN_00b241e0(long param_1,ulong param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  
  FUN_01b3c408(0xb0,*(undefined4 *)(param_1 + 8));
  cVar2 = *(char *)(param_1 + 0x11);
  if (cVar2 == '\x01') {
    snprintf(&DAT_0483b140,8,"%04d_%02d",(uint)*(ushort *)(param_1 + 0x238),
             (uint)*(byte *)(param_1 + 0x23a));
    FUN_01b3c818(0xb1,&DAT_0483b140);
  }
  else {
    FUN_01b3c818(0xb1,&DAT_03c886bc);
    if (cVar2 == '\x02') {
      FUN_01b3c408(0xb2,*(undefined2 *)(param_1 + 0x18));
      FUN_01b3c408(0xb3,*(undefined2 *)(param_1 + 0x1a));
      FUN_01b3c408(0xb4,*(undefined2 *)(param_1 + 0x1c));
      FUN_01b3c408(0xb5,*(undefined2 *)(param_1 + 0x1e));
      FUN_01b3c408(0xb6,*(undefined2 *)(param_1 + 0x20));
      FUN_01b3c408(0xb7,*(undefined2 *)(param_1 + 0x22));
      FUN_01b3c408(0xb8,*(undefined2 *)(param_1 + 0x24));
      FUN_01b3c408(0xb9,*(undefined2 *)(param_1 + 0x26));
      FUN_01b3c408(0xba,*(undefined2 *)(param_1 + 0x28));
      FUN_01b3c408(0xbb,*(undefined2 *)(param_1 + 0x2a));
      FUN_01b3c408(0xbc,*(undefined2 *)(param_1 + 0x2c));
      uVar8 = *(undefined2 *)(param_1 + 0x2e);
      goto LAB_00b24384;
    }
  }
  FUN_01b3c408(0xb2,0);
  FUN_01b3c408(0xb3,0);
  FUN_01b3c408(0xb4,0);
  FUN_01b3c408(0xb5,0);
  FUN_01b3c408(0xb6,0);
  FUN_01b3c408(0xb7,0);
  FUN_01b3c408(0xb8,0);
  FUN_01b3c408(0xb9,0);
  FUN_01b3c408(0xba,0);
  FUN_01b3c408(0xbb,0);
  FUN_01b3c408(0xbc,0);
  uVar8 = 0;
LAB_00b24384:
  FUN_01b3c408(0xbd,uVar8);
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar10 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar10;
  puVar4 = PTR_DAT_047d4ce8;
  puVar3 = PTR_DAT_047d4ce0;
  plVar12 = *(long **)(lVar10 + 0x1c0);
  do {
    lVar10 = *plVar12;
    puVar11 = (undefined8 *)(lVar10 + 0x28);
    plVar6 = (long *)(**(code **)*puVar11)(puVar11);
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar7 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar7;
      __cxa_guard_release(puVar3);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar4) {
        puVar1 = (undefined4 *)(param_1 + 0x18);
        if (*(char *)(lVar10 + 0x45) != '\0') {
          puVar1 = (undefined4 *)(param_1 + 0x48);
        }
        if ((cVar2 == '\x04') && (puVar1[1] != -1)) {
          FUN_01b3c408(0xbe,*puVar1);
          uVar9 = puVar1[1];
        }
        else {
          FUN_01b3c408(0xbe,0);
          uVar9 = 0xffffffff;
        }
        FUN_01b3c408(0xbf,uVar9);
        uVar9 = 0x13;
        if ((param_2 & 1) != 0) {
          uVar9 = 0x14;
        }
        FUN_017d2474(uVar9,0);
        return;
      }
    }
    plVar12 = plVar12 + 1;
  } while( true );
}


