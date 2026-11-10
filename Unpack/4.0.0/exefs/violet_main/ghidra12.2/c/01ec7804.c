/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec7804; name: FUN_01ec7804
 */


void FUN_01ec7804(long param_1,undefined8 param_2,undefined4 param_3)

{
  short sVar1;
  long lVar2;
  void *pvVar3;
  byte bVar4;
  size_t __n;
  ulong uVar5;
  long lVar6;
  void *__src;
  undefined4 local_a0;
  char local_9c;
  long local_98;
  long *local_90 [4];
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  FUN_01267a34(local_90,param_2,param_3);
  if (local_90[0] != (long *)0x0) {
    lVar6 = local_90[0][2];
    bVar4 = *(byte *)(*local_90[0] + lVar6);
    local_90[0][2] = lVar6 + 1;
    if (bVar4 < 0x81) {
      if (bVar4 == 0x80) {
        bVar4 = *(byte *)(*local_90[0] + lVar6 + 1);
        local_90[0][2] = lVar6 + 2;
      }
      if (bVar4 == 3) {
        local_a0 = 0;
        local_9c = '\0';
        local_98 = 0;
        uVar5 = FUN_01ec7acc(local_90[0],&local_a0);
        if ((uVar5 & 1) != 0) {
          lVar6 = *(long *)(param_1 + 0x40);
          lVar2 = *(long *)(param_1 + 0x48);
          if (lVar6 == lVar2) {
LAB_01ec79c4:
            if (lVar6 != lVar2) {
              sVar1 = (ushort)*(byte *)(lVar6 + 0x24) + local_a0._2_2_;
              *(char *)(lVar6 + 0x24) = (char)sVar1;
              if (*(code **)(param_1 + 0x180) != (code *)0x0) {
                local_68 = CONCAT44(local_68._4_4_,CONCAT22(sVar1,(undefined2)local_a0)) &
                           0xffffffff00ffffff;
                local_68._0_5_ = CONCAT14(local_9c,(undefined4)local_68);
                local_70 = local_98;
                (**(code **)(param_1 + 0x180))(param_1 + 0x1a0,&local_70);
              }
            }
          }
          else {
            do {
              if ((((uint)*(ushort *)(lVar6 + 0x20) == (local_a0 & 0xffff)) &&
                  (*(char *)(lVar6 + 0x26) == local_9c)) && (*(long *)(lVar6 + 0x28) == local_98))
              goto LAB_01ec79c4;
              lVar6 = lVar6 + 0x40;
            } while (lVar2 != lVar6);
          }
        }
      }
      else if (bVar4 == 2) {
        local_a0 = local_a0 & 0xff000000;
        local_98 = 0;
        uVar5 = FUN_01ec7a70(local_90[0],&local_a0);
        if ((uVar5 & 1) != 0) {
          __src = *(void **)(param_1 + 0x40);
          pvVar3 = *(void **)(param_1 + 0x48);
          if (__src != pvVar3) {
            do {
              if ((((uint)*(ushort *)((long)__src + 0x20) == (local_a0 & 0xffff)) &&
                  (*(char *)((long)__src + 0x26) == local_a0._2_1_)) &&
                 (*(long *)((long)__src + 0x28) == local_98)) goto LAB_01ec795c;
              __src = (void *)((long)__src + 0x40);
            } while (pvVar3 != __src);
            __src = pvVar3;
          }
LAB_01ec795c:
          if (pvVar3 != __src) {
            memcpy(&local_70,__src,0x40);
            __n = (long)pvVar3 - ((long)__src + 0x40);
            if (__n != 0) {
              memmove(__src,(void *)((long)__src + 0x40),__n);
            }
            *(size_t *)(param_1 + 0x48) = (long)__src + __n;
            if (*(code **)(param_1 + 0x100) != (code *)0x0) {
              (**(code **)(param_1 + 0x100))(param_1 + 0x120,&local_70);
            }
          }
        }
      }
      else if (bVar4 == 1) {
        local_58 = 0;
        uStack_50 = 0;
        local_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        uVar5 = FUN_01ec7a14(local_90[0],&local_70);
        if ((uVar5 & 1) != 0) {
          FUN_01876994(param_1,&local_70);
        }
      }
    }
  }
  FUN_01267b4c(local_90);
  return;
}


