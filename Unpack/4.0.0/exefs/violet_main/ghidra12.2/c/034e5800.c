/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e5800; name: FUN_034e5800
 */


undefined4 FUN_034e5800(void *param_1)

{
  undefined *puVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  *(undefined4 *)((long)param_1 + 0xb8) = 0;
  if ((*(uint *)((long)param_1 + 0xb0) < 0xc) && (*(uint *)((long)param_1 + 0xb4) < 0xb)) {
    lVar5 = ((ulong)*(uint *)((long)param_1 + 0xb4) - (ulong)*(uint *)((long)param_1 + 0xb0)) + 0xb;
    lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                      (0,*(undefined8 *)((long)param_1 + 0xa8),lVar5 * 8);
    if (lVar4 != 0) {
      *(long *)((long)param_1 + 0xa8) = lVar4;
      *(int *)((long)param_1 + 0xb4) = (int)lVar5;
      goto LAB_034e5864;
    }
LAB_034e59d4:
    uVar7 = 0x34;
  }
  else {
LAB_034e5864:
    uVar8 = 0;
    *(undefined4 *)((long)param_1 + 0xb0) = 0xb;
    do {
      *(undefined8 *)(*(long *)((long)param_1 + 0xa8) + uVar8 * 8) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)((long)param_1 + 0xb0));
    if (*(char *)((long)param_1 + 0x60) == '\0') {
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
      *(undefined8 *)((long)param_1 + 8) = 0;
      *(undefined8 *)((long)param_1 + 0x10) = 0;
      *(undefined1 *)((long)param_1 + 0x60) = 1;
      *(undefined8 *)((long)param_1 + 0x18) = 0;
      *(undefined8 *)((long)param_1 + 0x20) = 0;
      puVar1 = PTR_DAT_047e2fd0;
      *(undefined4 *)((long)param_1 + 0x50) = 0x4483126f;
      *(undefined1 *)((long)param_1 + 0x54) = 0x32;
      lVar5 = (**(code **)(puVar1 + 0x10))(0,800);
      *(long *)((long)param_1 + 0x168) = lVar5;
      if (lVar5 == 0) goto LAB_034e59d4;
      uVar6 = 0;
      *(long *)((long)param_1 + 0x160) = lVar5;
      *(undefined4 *)((long)param_1 + 0x170) = 10;
      puVar10 = (undefined8 *)(lVar5 + -0x50);
      do {
        uVar6 = uVar6 + 1;
        puVar11 = puVar10 + 10;
        *puVar11 = puVar10 + 0x14;
        puVar10[0xb] = 0xffffffff;
        puVar10[0xc] = 0;
        *(undefined1 *)(puVar10 + 0xd) = 0;
        puVar10[0xe] = 0;
        puVar10[0xf] = 0;
        puVar10 = puVar11;
      } while (uVar6 < *(uint *)((long)param_1 + 0x170));
      *puVar11 = 0;
      if (DAT_048b0588 == '\0') {
        *(undefined1 *)((long)param_1 + 0x128) = 0;
        nn::os::InitializeEvent((long)param_1 + 0x100,0,1);
        puVar1 = PTR_DAT_047e6c18;
        uVar8 = *(ulong *)(PTR_DAT_047e6c18 + 0x48);
        lVar5 = tpidr_el0;
        plVar9 = *(long **)(lVar5 + 0x30);
        if (plVar9 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar9 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        DAT_048b0708 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar8,0x1000);
        if (DAT_048b0708 != (void *)0x0) {
          DAT_048b0718 = (undefined4)uVar8;
          iVar3 = nn::os::CreateThread
                            ((ThreadType *)&DAT_048b0548,(_func_void_void_ptr *)&LAB_034e5d04,
                             param_1,DAT_048b0708,uVar8 & 0xffffffff,*(int *)(puVar1 + 0x40));
          pvVar2 = DAT_048b0708;
          if (iVar3 == 0) {
            nn::os::SetThreadName((ThreadType *)&DAT_048b0548,"AK::BankManager");
            nn::os::SetThreadCoreMask
                      ((ThreadType *)&DAT_048b0548,*(int *)(puVar1 + 0x50),*(ulong *)(puVar1 + 0x58)
                      );
            nn::os::StartThread((ThreadType *)&DAT_048b0548);
          }
          else {
            if ((DAT_048b0710 != 0) && (DAT_048b0708 != (void *)0x0)) {
              plVar9 = *(long **)(lVar5 + 0x30);
              if (plVar9 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar9 = DAT_04859430;
                *(long **)(lVar5 + 0x30) = DAT_04859430;
              }
              uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
              if (((uVar8 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                (**(code **)(*plVar9 + 0x18))(plVar9,pvVar2,0,8);
              }
              else {
                FUN_00c48fe8(plVar9,pvVar2,0,8);
              }
            }
            DAT_048b0708 = (void *)0x0;
          }
        }
        uVar7 = 1;
        if (DAT_048b0588 == '\0') {
          uVar7 = 2;
        }
        return uVar7;
      }
    }
    uVar7 = 2;
  }
  return uVar7;
}


