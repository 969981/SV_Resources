/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5d040; name: FUN_01e5d040
 */


void FUN_01e5d040(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  FUN_01e5cdf0(param_1,param_1 + 0x38,param_1 + 0x70);
  if (param_1 + 0xa8 != param_2) {
    lVar2 = 0;
    lVar4 = param_1 + 0xa8;
    lVar3 = param_1 + 0x70;
    do {
      lVar1 = lVar4;
      if (*(float *)(lVar3 + 0x34) < *(float *)(lVar1 + 0x34)) {
        local_98 = 0;
        uStack_90 = 0;
        FUN_00d0a34c(&local_98,lVar1);
        local_88 = 0;
        uStack_80 = 0;
        FUN_00c93a38(&local_88,lVar1 + 0x10);
        local_78 = 0;
        uStack_70 = 0;
        FUN_00f5a410(&local_78,lVar1 + 0x20);
        local_68 = *(undefined8 *)(lVar1 + 0x30);
        lVar4 = lVar2;
        do {
          lVar3 = param_1 + lVar4;
          FUN_00d0a34c(lVar3 + 0xa8,lVar3 + 0x70);
          FUN_00c93a38(lVar3 + 0xb8,lVar3 + 0x80);
          FUN_00f5a410(lVar3 + 200,lVar3 + 0x90);
          *(undefined8 *)(lVar3 + 0xd8) = *(undefined8 *)(lVar3 + 0xa0);
          if (lVar4 == -0x70) break;
          lVar4 = lVar4 + -0x38;
        } while (*(float *)(lVar3 + 0x6c) < local_68._4_4_);
        FUN_00d0a34c(lVar3 + 0x70,&local_98);
        FUN_00c93a38(lVar3 + 0x80,&local_88);
        FUN_00f5a410(lVar3 + 0x90,&local_78);
        *(undefined8 *)(lVar3 + 0xa0) = local_68;
        FUN_011753e0(&local_98);
      }
      lVar2 = lVar2 + 0x38;
      lVar4 = lVar1 + 0x38;
      lVar3 = lVar1;
    } while (lVar1 + 0x38 != param_2);
  }
  return;
}


