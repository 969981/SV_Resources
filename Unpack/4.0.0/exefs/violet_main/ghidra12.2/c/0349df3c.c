/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349df3c; name: FUN_0349df3c
 */


int FUN_0349df3c(void)

{
  undefined *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  DAT_048b00d0 = 0;
  DAT_048b0100 = 0;
  DAT_047c3898 = 1;
  DAT_048b0104 = 0;
  DAT_047c389c = 0xbf800000;
  nn::os::InitializeEvent(&DAT_048b00d8,0,1);
  puVar1 = PTR_DAT_047e6c18;
  uVar7 = *(ulong *)(PTR_DAT_047e6c18 + 0x28);
  lVar8 = tpidr_el0;
  plVar6 = *(long **)(lVar8 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(lVar8 + 0x30) = DAT_04859430;
  }
  DAT_048b00b8 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar7,0x1000);
  if (DAT_048b00b8 != (void *)0x0) {
    DAT_048b00c8 = (undefined4)uVar7;
    iVar3 = nn::os::CreateThread
                      ((ThreadType *)&DAT_048afef8,FUN_0349e348,(void *)0x0,DAT_048b00b8,
                       uVar7 & 0xffffffff,*(int *)(puVar1 + 0x20));
    pvVar2 = DAT_048b00b8;
    if (iVar3 == 0) {
      nn::os::SetThreadName((ThreadType *)&DAT_048afef8,"AK Suspended");
      nn::os::SetThreadCoreMask
                ((ThreadType *)&DAT_048afef8,*(int *)(puVar1 + 0x30),*(ulong *)(puVar1 + 0x38));
      nn::os::StartThread((ThreadType *)&DAT_048afef8);
    }
    else {
      if ((DAT_048b00c0 != 0) && (DAT_048b00b8 != (void *)0x0)) {
        plVar6 = *(long **)(lVar8 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar8 + 0x30) = DAT_04859430;
        }
        uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,pvVar2,0,8);
        }
        else {
          FUN_00c48fe8(plVar6,pvVar2,0,8);
        }
      }
      DAT_048b00b8 = (void *)0x0;
    }
  }
  if (DAT_048aff38 == '\0') {
    iVar3 = 2;
  }
  else {
    if (DAT_048b0118 == (undefined8 *)0x0) {
      DAT_048afef4 = true;
    }
    else {
      lVar8 = (long)DAT_048b0118;
      iVar3 = 1;
      do {
        iVar4 = FUN_0349afcc(lVar8,0);
        lVar8 = *(long *)(lVar8 + 0x20);
        if (iVar4 == 1 || iVar3 != 1) {
          iVar4 = iVar3;
        }
        iVar3 = iVar4;
      } while (lVar8 != 0);
      DAT_048afef4 = iVar4 == 1;
    }
    if (*(int *)PTR_DAT_047e7008 != 2) {
      *(undefined4 *)PTR_DAT_047e7008 = 1;
    }
    DAT_047c3898 = 1;
    nn::os::SignalEvent((EventType *)&DAT_048b00d8);
    puVar1 = PTR_DAT_047e2fd0;
    local_60 = 0;
    uStack_58 = 0;
    puVar5 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x480);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_0349a384(puVar5,&local_60,0,1,1);
      iVar3 = FUN_0349afcc(puVar5,1);
      if (iVar3 == 1) {
        local_50 = 0x42b4000042340000;
        local_48 = 0x43070000;
        iVar3 = FUN_0349c568(0x425acccd,puVar5,&local_50,3);
        if (iVar3 != 1) {
          (**(code **)*puVar5)(puVar5);
          (**(code **)(puVar1 + 0x30))(0,puVar5);
          return iVar3;
        }
        if (DAT_048b0118 == (undefined8 *)0x0) {
          DAT_048b0110 = puVar5;
          DAT_048b0118 = puVar5;
          puVar5[4] = 0;
        }
        else {
          puVar5[4] = DAT_048b0118;
          DAT_048b0118 = puVar5;
        }
        DAT_048b0108 = DAT_048b0108 + 1;
        return 1;
      }
      (**(code **)*puVar5)(puVar5);
      (**(code **)(puVar1 + 0x30))(0,puVar5);
    }
    iVar3 = 0x34;
  }
  return iVar3;
}


