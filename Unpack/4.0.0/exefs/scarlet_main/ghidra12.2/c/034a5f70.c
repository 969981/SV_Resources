/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a5f70; name: FUN_034a5f70
 */


void FUN_034a5f70(long param_1,long *param_2)

{
  void *__s;
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  plVar3 = *(long **)(param_1 + 0x278);
  if ((plVar3 != param_2) && (*(char *)(param_1 + 0x98) == '\0')) {
    local_60 = 0;
    local_58 = 0xff;
    __s = (void *)(param_1 + 0xb0);
    local_50 = 0xff;
    local_48 = 0;
    local_70 = *(undefined8 *)(param_1 + 0x10);
    local_68 = *(undefined4 *)(param_1 + 0x34);
    plVar4 = param_2;
    do {
      lVar5 = plVar4[0x14];
      if (lVar5 != 0) goto LAB_034a5fe8;
      plVar4 = (long *)plVar4[0x13];
    } while (plVar4 != (long *)0x0);
    lVar5 = 0;
LAB_034a5fe8:
    if (*(long *)(param_1 + 0x280) == 0) {
      uVar2 = 1;
    }
    else if (*(long *)(param_1 + 0x280) == lVar5) {
      uVar2 = 0;
    }
    else {
      memset(__s,0,0x68);
      *(undefined2 *)(param_1 + 0x13c) = 0;
      *(undefined8 *)(param_1 + 0x11c) = 0;
      plVar3 = (long *)0x0;
      *(undefined8 *)(param_1 + 0x124) = 0;
      uVar2 = 1;
      *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
      *(undefined4 *)(param_1 + 300) = 0;
      *(ushort *)(param_1 + 0x13e) = *(ushort *)(param_1 + 0x13e) & 0xfc00;
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x278) = 0;
      *(undefined8 *)(param_1 + 0x280) = 0;
    }
    *(ushort *)(param_1 + 0x13e) = *(ushort *)(param_1 + 0x13e) & 0xfd21;
    *(undefined8 *)(param_1 + 0x130) = 0x20000005d;
    *(undefined4 *)(param_1 + 0x138) = 0;
    (**(code **)(*param_2 + 0x150))
              (param_2,__s,param_1 + 0x140,&local_70,param_1 + 0x150,param_1 + 0x168,uVar2,plVar3);
    *(long **)(param_1 + 0x278) = param_2;
    if ((lVar5 != 0) && (*(long *)(param_1 + 0x280) == 0)) {
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0xff;
      local_80 = 0xff;
      local_78 = 0;
      uVar1 = FUN_03471aac(lVar5);
      if ((uVar1 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x134) = 0;
        *(undefined4 *)(param_1 + 0x130) = 0x7000020;
        FUN_03471ba0(lVar5,__s,&local_a0);
        fVar6 = *(float *)(param_1 + 0xc0);
        *(undefined4 *)(param_1 + 0xc0) = 0;
        *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) + fVar6;
      }
      *(long *)(param_1 + 0x280) = lVar5;
    }
  }
  return;
}


