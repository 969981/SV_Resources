/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033e51fc; name: FUN_033e51fc
 */


undefined8 FUN_033e51fc(long param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  void *__dest;
  long lVar4;
  long *plVar5;
  long lVar6;
  void *__src;
  uint uVar7;
  
  plVar5 = (long *)*DAT_048aec30;
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*plVar5 + 0x10))
                      (plVar5,0x20000,
                       "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/AkRecorder/AkRecorderManager.cpp"
                       ,0x3c);
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar7 = *(uint *)(param_1 + 0x1c);
  if (uVar2 < uVar7) {
LAB_033e52d8:
    if (uVar2 < uVar7) {
      lVar4 = *(long *)(param_1 + 0x10);
      bVar3 = lVar4 != 0;
      uVar7 = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x18) = uVar7 + 1;
      if ((lVar6 != 0) && (lVar4 != 0)) {
        *(long *)(lVar4 + (ulong)uVar7 * 8) = lVar6;
        *(undefined8 *)(param_1 + 0x28) = 0;
        return 1;
      }
      goto LAB_033e5314;
    }
  }
  else {
    iVar1 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar1 = 1;
    }
    uVar7 = iVar1 + uVar7;
    __src = *(void **)(param_1 + 0x10);
    __dest = (void *)(**(code **)(*(long *)*DAT_048aec30 + 0x10))
                               ((long *)*DAT_048aec30,(ulong)uVar7 << 3,"../AkRecorderManager.h",
                                0x35);
    if ((__src != (void *)0x0) && (__dest != (void *)0x0)) {
      memcpy(__dest,__src,(ulong)uVar2 << 3);
      (**(code **)(*(long *)*DAT_048aec30 + 0x18))((long *)*DAT_048aec30,__src);
LAB_033e52d0:
      *(void **)(param_1 + 0x10) = __dest;
      *(uint *)(param_1 + 0x1c) = uVar7;
      goto LAB_033e52d8;
    }
    if (__dest != (void *)0x0) goto LAB_033e52d0;
  }
  bVar3 = false;
LAB_033e5314:
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar6);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (bVar3) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
  return 0;
}


