/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0229aa10; name: FUN_0229aa10
 */


void FUN_0229aa10(undefined8 *param_1,long *param_2,void *param_3)

{
  void *__dest;
  void *__src;
  uint uVar1;
  int iVar2;
  void *__dest_00;
  long lVar3;
  void *__dest_01;
  long lVar4;
  void *__src_00;
  
  __dest_00 = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x120,0x10);
  if (__dest_00 == (void *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    memcpy(__dest_00,param_3,0x88);
    *(undefined8 *)((long)__dest_00 + 0x88) = 0;
    *(undefined8 *)((long)__dest_00 + 0x90) = 0x8000000000000000;
    uVar1 = *(uint *)((long)param_3 + 0x90);
    if ((int)uVar1 < 1) {
      *(undefined8 *)((long)__dest_00 + 0x88) = 0;
      *(undefined8 *)((long)__dest_00 + 0x90) = 0x8000000000000000;
    }
    else {
      __src_00 = *(void **)((long)param_3 + 0x88);
      __dest_01 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                    (PTR_PTR_047d1a50,(ulong)uVar1 * 0x30);
      *(void **)((long)__dest_00 + 0x88) = __dest_01;
      *(uint *)((long)__dest_00 + 0x90) = uVar1;
      *(uint *)((long)__dest_00 + 0x94) = uVar1;
      if (uVar1 != 1) {
        iVar2 = -(uVar1 & 0xfffffffe);
        do {
          memcpy(__dest_01,__src_00,0x30);
          __dest = (void *)((long)__dest_01 + 0x30);
          __src = (void *)((long)__src_00 + 0x30);
          __dest_01 = (void *)((long)__dest_01 + 0x60);
          __src_00 = (void *)((long)__src_00 + 0x60);
          memcpy(__dest,__src,0x30);
          iVar2 = iVar2 + 2;
        } while (iVar2 != 0);
      }
      if ((uVar1 & 1) != 0) {
        memcpy(__dest_01,__src_00,0x30);
      }
    }
    memcpy((void *)((long)__dest_00 + 0x98),(void *)((long)param_3 + 0x98),0x5c);
    lVar4 = *(long *)((long)param_3 + 0xf8);
    *(long *)((long)__dest_00 + 0xf8) = lVar4;
    if (lVar4 != 0) {
      FUN_012dcb00();
    }
    lVar4 = *(long *)((long)param_3 + 0x100);
    *(long *)((long)__dest_00 + 0x100) = lVar4;
    if (lVar4 != 0) {
      FUN_012dcb00();
    }
    *(undefined1 *)((long)__dest_00 + 0x110) = *(undefined1 *)((long)param_3 + 0x110);
    *param_1 = __dest_00;
    param_1[1] = param_2;
    param_1[2] = 0x120;
    param_1[3] = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


