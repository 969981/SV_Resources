/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fbe70; name: FUN_002fbe70
 */


undefined8 *
FUN_002fbe70(undefined8 param_1,long param_2,char *param_3,undefined8 param_4,undefined8 param_5,
            undefined8 *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
            undefined **param_10,byte param_11,undefined8 param_12)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auStack_c0 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar9 = (undefined8 *)0x0;
  if ((param_2 != 0) && (param_3 != (char *)0x0)) {
    puVar9 = (undefined8 *)FUN_0038c7b0(0x168);
    FUN_0038db00(puVar9 + 0x26);
    FUN_0038da50(puVar9 + 1,1);
    puVar4 = PTR_FUN_047cca20;
    puVar9[2] = param_1;
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[4] = puVar4;
    puVar9[0xf] = param_8;
    puVar9[0x10] = param_9;
    uVar6 = FUN_00305470(param_5);
    puVar9[0x11] = uVar6;
    uStack_98 = param_6[1];
    local_a0 = *param_6;
    uStack_88 = param_6[3];
    uStack_90 = param_6[2];
    FUN_00367030(&local_80,&local_a0);
    puVar9[0x13] = uStack_78;
    puVar9[0x12] = local_80;
    puVar9[0x15] = uStack_68;
    puVar9[0x14] = uStack_70;
    FUN_00367020(&local_80);
    puVar9[0x1a] = uStack_68;
    puVar9[0x19] = uStack_70;
    puVar9[0x18] = uStack_78;
    puVar9[0x17] = local_80;
    FUN_00373770(puVar9 + 0xc);
    *(byte *)(puVar9 + 0x16) = param_11 & 1;
    puVar9[0x2c] = param_12;
    puVar9[0x1c] = 0x100;
    uVar6 = FUN_0038c7b0(0x100);
    puVar9[0x1b] = uVar6;
    FUN_00367770(&local_80,param_3);
    iVar5 = strcmp(param_3,"lame");
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      FUN_003673f0(auStack_c0,"/grpc.gcp.HandshakerService/DoHandshake");
      uVar6 = FUN_0036f8e0(param_2,0,0xffff,param_4,auStack_c0,&local_80,0x7fffffffffffffff,0);
    }
    puVar9[3] = uVar6;
    ppuVar1 = &PTR_LAB_044942f0;
    if (param_10 != (undefined **)0x0) {
      ppuVar1 = param_10;
    }
    *puVar9 = ppuVar1;
    puVar9[6] = param_7;
    puVar9[7] = puVar9;
    puVar9[8] = 0;
    puVar9[0x1e] = &LAB_002fc040;
    puVar9[0x1f] = puVar9;
    puVar9[0x20] = 0;
    if ((local_80 != (undefined8 *)0x0) && (plVar7 = (long *)*local_80, plVar7 != (long *)0x0)) {
      do {
        lVar8 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)local_80[3])(local_80[4]);
      }
    }
  }
  return puVar9;
}


