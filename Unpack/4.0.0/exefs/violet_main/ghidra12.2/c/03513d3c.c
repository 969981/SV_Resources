/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03513d3c; name: FUN_03513d3c
 */


undefined8 FUN_03513d3c(void *param_1)

{
  ThreadType *pTVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  HardwareOpusDecoder *this;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_047e2fd0;
  if (DAT_048b1778 == 0) {
    this = (HardwareOpusDecoder *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x40);
    if (this == (HardwareOpusDecoder *)0x0) {
      return 2;
    }
    nn::codec::HardwareOpusDecoder::HardwareOpusDecoder(this,0);
    uVar5 = (**(code **)(*(long *)this + 0x10))(this,8000,1);
    uVar6 = (**(code **)(*(long *)this + 0x10))(this,12000,1);
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    uVar5 = (**(code **)(*(long *)this + 0x10))(this,16000,1);
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    uVar6 = (**(code **)(*(long *)this + 0x10))(this,24000,1);
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    DAT_048b1778 = (**(code **)(*(long *)this + 0x10))(this,48000,1);
    if (DAT_048b1778 <= uVar6) {
      DAT_048b1778 = uVar6;
    }
    uVar5 = (**(code **)(*(long *)this + 0x10))(this,8000,2);
    uVar6 = (**(code **)(*(long *)this + 0x10))(this,12000,2);
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    uVar5 = (**(code **)(*(long *)this + 0x10))(this,16000,2);
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    uVar6 = (**(code **)(*(long *)this + 0x10))(this,24000,2);
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    DAT_048b1780 = (**(code **)(*(long *)this + 0x10))(this,48000,2);
    if (DAT_048b1780 <= uVar6) {
      DAT_048b1780 = uVar6;
    }
    (*(code *)**(undefined8 **)this)(this);
    (**(code **)(puVar3 + 0x30))(5,this);
  }
  if (*(char *)((long)param_1 + 0x8a0) == '\0') {
    *(undefined1 *)((long)param_1 + 0xa60) = 0;
    nn::os::InitializeEvent((long)param_1 + 0xa38,0,1);
    puVar3 = PTR_DAT_047e6c18;
    if (*PTR_DAT_047e6980 == '\0') {
      uVar6 = *(ulong *)(PTR_DAT_047e6c18 + 0x88);
      lVar2 = tpidr_el0;
      plVar9 = *(long **)(lVar2 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar2 + 0x30) = DAT_04859430;
      }
      pvVar8 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,uVar6,0x1000);
      *(void **)((long)param_1 + 0xa20) = pvVar8;
      if (pvVar8 != (void *)0x0) {
        *(int *)((long)param_1 + 0xa30) = (int)uVar6;
        pTVar1 = (ThreadType *)((long)param_1 + 0x860);
        iVar4 = nn::os::CreateThread
                          (pTVar1,FUN_03515a00,param_1,pvVar8,uVar6 & 0xffffffff,
                           *(int *)(puVar3 + 0x80));
        if (iVar4 == 0) {
          nn::os::SetThreadName(pTVar1,"AK::OpusDecodingThread");
          nn::os::SetThreadCoreMask(pTVar1,*(int *)(puVar3 + 0x90),*(ulong *)(puVar3 + 0x98));
          nn::os::StartThread(pTVar1);
        }
        else {
          if ((*(long *)((long)param_1 + 0xa28) != 0) &&
             (lVar10 = *(long *)((long)param_1 + 0xa20), lVar10 != 0)) {
            plVar9 = *(long **)(lVar2 + 0x30);
            if (plVar9 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar9 = DAT_04859430;
              *(long **)(lVar2 + 0x30) = DAT_04859430;
            }
            uVar6 = FUN_00c4e564(plVar9);
            if ((uVar6 & 1) == 0) {
              (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,0,8);
            }
            else {
              FUN_00c48fe8(plVar9,lVar10,0,8);
            }
          }
          *(undefined8 *)((long)param_1 + 0xa20) = 0;
        }
      }
      if (*(char *)((long)param_1 + 0x8a0) == '\0') goto LAB_03513f68;
    }
    uVar7 = 1;
  }
  else {
LAB_03513f68:
    uVar7 = 2;
  }
  return uVar7;
}


