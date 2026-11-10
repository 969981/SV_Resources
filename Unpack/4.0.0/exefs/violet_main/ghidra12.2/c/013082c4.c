/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013082c4; name: FUN_013082c4
 */


void FUN_013082c4(undefined8 *param_1,void *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  memcpy(param_2,param_3,0x48);
  *(undefined8 *)((long)param_2 + 0x48) = 0;
  *(undefined8 *)((long)param_2 + 0x50) = 0;
  FUN_00dd9f00((undefined8 *)((long)param_2 + 0x48),(long)param_3 + 0x48);
  uVar6 = *(undefined8 *)((long)param_3 + 0x60);
  *(undefined8 *)((long)param_2 + 0x70) = 0;
  *(undefined8 *)((long)param_2 + 0x78) = 0;
  *(undefined8 *)((long)param_2 + 0x60) = uVar6;
  *(undefined8 *)((long)param_2 + 0x68) = 0;
  uVar6 = *(undefined8 *)((long)param_3 + 0x90);
  uVar1 = *(undefined8 *)((long)param_3 + 0x98);
  uVar2 = *(undefined8 *)((long)param_3 + 0x88);
  *(undefined8 *)((long)param_2 + 0x80) = *(undefined8 *)((long)param_3 + 0x80);
  *(undefined8 *)((long)param_2 + 0x88) = uVar2;
  *(undefined8 *)((long)param_2 + 0x90) = uVar6;
  *(undefined8 *)((long)param_2 + 0x98) = uVar1;
  *(undefined8 *)((long)param_2 + 0x68) = *(undefined8 *)((long)param_3 + 0x68);
  *(undefined8 *)((long)param_2 + 0x70) = *(undefined8 *)((long)param_3 + 0x70);
  *(undefined8 *)((long)param_2 + 0x78) = *(undefined8 *)((long)param_3 + 0x78);
  *(undefined8 *)((long)param_3 + 0x68) = 0;
  *(undefined8 *)((long)param_3 + 0x70) = 0;
  *(undefined8 *)((long)param_3 + 0x78) = 0;
  memcpy((void *)((long)param_2 + 0xa0),(void *)((long)param_3 + 0xa0),0x62);
  uVar6 = *(undefined8 *)((long)param_3 + 0x110);
  *(undefined8 *)((long)param_3 + 0x110) = 0;
  *(undefined8 *)((long)param_2 + 0x110) = uVar6;
  uVar6 = *(undefined8 *)((long)param_3 + 0x118);
  *(undefined8 *)((long)param_3 + 0x118) = 0;
  *(undefined8 *)((long)param_2 + 0x118) = uVar6;
  uVar6 = *(undefined8 *)((long)param_3 + 0x120);
  *(undefined8 *)((long)param_3 + 0x120) = 0;
  *(undefined8 *)((long)param_2 + 0x120) = uVar6;
  uVar3 = *(undefined4 *)((long)param_3 + 0x128);
  *(undefined1 *)((long)param_2 + 300) = *(undefined1 *)((long)param_3 + 300);
  *(undefined4 *)((long)param_2 + 0x128) = uVar3;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


